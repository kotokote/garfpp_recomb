#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <TCanvas.h>
#include <TROOT.h>
#include <TApplication.h>
#include <TFile.h>
#include <TTree.h>
#include <time.h>

#include "ViewField.hh"
#include "ViewSignal.hh"
#include "ViewCell.hh"
#include "ViewDrift.hh"
#include "ComponentAnalyticField.hh"
#include "MediumMagboltz.hh"
#include "SolidTube.hh"
#include "SolidBox.hh"
#include "GeometrySimple.hh"
#include "Sensor.hh"
#include "AvalancheMC.hh"
#include "Random.hh"

using namespace Garfield;
using namespace std;




int main() {
    
    // let's choose 1 atm for now
    const double p = 760;        // pressure [Torr]
    // make a room temperature first (293K == 20 C == 68F)
    const double gas_temp = 293.0;  // temperature in K

      // Make a gas medium
      MediumMagboltz* gas = new MediumMagboltz();
      // Set the temperature and pressure
      gas->SetTemperature(gas_temp);
      gas->SetPressure(p);
      gas->SetComposition("Ar", 100.0);
 
    
     
     // Build the geometry
      GeometrySimple* geo = new GeometrySimple();
      // make field
      ComponentAnalyticField* cmp = new ComponentAnalyticField();
      cmp->SetGeometry(geo);
      // Make a box full of Ar liquid
      SolidBox* box = new SolidBox(0.0, 0.0, 0.0, 100.0, 100.0, 100);
      
      /* Make a grounded (V = 0) 10x10 cm plane inside of a box with Ar
      void AddPlaneY(const double y, const double voltage, const std::string label);

      this is another way to do a plane; however, it's not going to be grounded:
      //SolidBox* dielectric_p = new SolidBox(0.0, 0.0, 0.0, 10.0, 10.0, 1e-4); 

      */
      cmp->AddPlaneX(0.0, 0.0, "plane");

      /*Make a tube 10 cm apart from the dielectric plane
      // in /Source/SolideTube. cc ; 1. 0. 0. is a vector (the tube goes in z direction)
      // and 5.5. 0 is a center of the plane 


      // Add a wire at (x, y) .
    void AddWire(const double x, const double y, const double diameter,
                 const double voltage, const std::string label,
                 const double length = 100.,
                 const double tension = 50., const double rho = 19.3,
                 const int ntrap = 5);
      */
      cmp->AddWire(10.0, 0.0, 0.015, 5000.0, "wire", 10.0, 30.0, 7700);



     // double rMin = 0., rMax = 0.0075, halfLength = 5.;
      //SolideTube* wire = new SolidTube(5, 5, 10, rMin, rMax, halfLength, 1, 0, 0); 

      // Add the solid to the geometry, together with the medium inside
      geo->AddSolid(box, gas);
      
      gas->SetFieldGrid(100., 100.e3, 20, true);
      const int ncoll = 1;
      const bool verbose = true;
      gas->LoadGasFile("roomtemp_1atm.gas");
      //gas->GenerateGasTable(ncoll, verbose);
      //geo->AddSolid(dielectric_p, gas); this line is needed if SolidBox is used for creating a plane
      //geo->AddSolid(wire, 0); // /Source/GeometrySimple.cc  m == 0 (wire is empty inside) GeometrySimple::AddSolid(Solid* s, Medium* m)

      // There is 5000V for the wire
      //const double vWire = 5000.;
      // copper-beryllium rho = 8200; there might be another choice stainless-steel = 7700
      //const double rhoWire = 7700.;
      //const int ntrap = 5; 
      //const int nEdges = 0; // n = 0 cylindrical pipe
      /*
        void AddTube(const double radius, const double voltage,
                 const int nEdges, const std::string label);
                        */
      //cmp->AddTube(rMax, vWire, nEdges, "string_label");
     


      //We want to calculate the signal induced on the wire.
      cmp->AddReadout("wire");

      
      //make a sensor

      Sensor* sensor = new Sensor();
      // Calculate the electric field using the Component object cmp.
      sensor->AddComponent(cmp);
      // Request signal calculation for the electrode named "wire",
      // using the weighting field provided by the Component object cmp.
      sensor->AddElectrode(cmp, "wire");

      /* to calculate only the electron signal:
      We set the time interval within which the signal is recorded by the sensor to 2 ns, with a binning of 0.02 ns.(I took these
      parameters for the first try)
      
      The time window for your sensor readout is too short. Electrons typically drift at 1 um/nsec (or 1m/msec).
      Since you are drifting 10cm, it would be safer to have at least 100 usec (or longer) of readout window.

      */

      const double tMin = 0.;
      const double tMax = 0.3; // time in nsec
      //0.009999;
      const double tStep = 0.009999; //size of bin

      const int nTimeBins = int((tMax - tMin) / tStep);
      sensor->SetTimeWindow(0., tStep, nTimeBins);
      //sensor->EnableDebugging();



      AvalancheMC* aval = new AvalancheMC();
      aval->SetSensor(sensor);
          // Switch on signal calculation.
      aval->EnableSignalCalculation();
      // Do the drift line calculation in time steps of 50 ps.
      aval->SetTimeSteps(0.0001);
      // Starting position [cm] and time [ns] of the initial electron.
      // The electron is started at 100 micron above the wire.
      const double x0 = 9.99;
      const double y0 = 0.;

      const double z0 = 0.;
      const double t0 = 0.;
      // Simulate an avalanche.
      aval->AvalancheElectron(x0, y0, z0, t0);
      //gas->WriteGasFile("roomtemp_1atm.gas");
      //std:cerr << something<< endl;
      

      ofstream f("graph");
      for(int i = 0; i < nTimeBins; i++){
          //cout << "here " << i << endl;
          f << i << " " << sensor->GetSignal("wire", i) << endl; // extract signal 
      }
      f.close();

      delete gas;
      delete geo;
      delete box;
      delete cmp;
      delete sensor;
 
}
//This script ilustrates the simulation of the VUV electroluminescence and its properties in pure noble gases (Ne, Ar, Kr and Xe).
//The program implements a uniform field created by two parallel metalic plates

//Please see, for further details, Phys. Lett. B, vol. 703, pp 217-222, 2011.
// Author: C. A. B. Oliveira
// email: carlos.oliveira@ua.pt

// modified by Azriel 
// use new cloud transport that takes in a series of ionization points (from other programs possibly)
// and transports the collection with intercorrelations

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
#include "ViewCell.hh"
#include "ViewDrift.hh"
#include "ComponentAnalyticField.hh"
#include "MediumMagboltz.hh"
#include "SolidTube.hh"
#include "SolidBox.hh"
#include "GeometrySimple.hh"
#include "Sensor.hh"
#include "AvalancheMicroscopic.hh"
#include "Random.hh"

using namespace Garfield;
using namespace std;

class EPrimary {
public:
  Int_t ne;                    // # of electrons
  Int_t ni;                    // # of ionizations
  Int_t nExc;                  // # of excitations
  Int_t nElastic;              // # of elastic collisions 
  Int_t nTopPlane;             // # of electrons that finished at top plane
  Int_t nBottomPlane;          // #  of electrons that finished at bottom plane
  void clear() {               //reset counters
    ne=0;
    ni=0;
    nExc=0;
    nElastic=0;
    nTopPlane=0;
    nBottomPlane=0;
  }
  void print() {               //print counters
    std::cout << "number of electrons: " << ne << " (" << nTopPlane << " of them ended in the top electrode and " << nBottomPlane << " in the bottom electrode)\n";
    std::cout << "number of ionisations: " << ni << "\n";
    std::cout << "number of excitations: " << nExc << "\n";
    std::cout << "number of elastic collisions: " << nElastic << "\n\n";
  }
};

int main(int argc, char * argv[]) {

  // loop over fields
  
  // double fieldlist[11] = {200.,100.,50.,20.,10.,5.,2.,1.,0.5,0.2,0.1}; 
  double fieldlist[1] = {0.000001}; 
  // double fieldlist[5] = {2.,1.,0.5,0.2,0.1}; 
  for (int nef = 0; nef < 1; nef++) {
    double ef = fieldlist[nef];

    std::cout << "Electric Field of " << ef << " volt per cm" << "\n";
  //simulation parameters
  int npe = 1;                                  //number of primary electrons (avalanches) to simulate
  //  double ef = 0.5;                            //electric field intensity [Vcm-1]
  double yGap = 0.54;                            //width of the parallel gap [cm]
  double v = ef * (yGap + 0.2);                 //voltage applied between the two plates
                                                //the primary electrons will be released 0.2 cm far way from the bottom electrode and drift toward the top electrode

  //gas parameters
  double p=7600.;                                 //pressure [Torr] 10atm 
  double temp=293.15;                           //temperature [K];
  //double temp=0.1;                           //temperature [K];

  // Make a gas medium
  MediumMagboltz* gas = new MediumMagboltz();
  // Set the temperature and pressure
  gas->SetTemperature(temp);
  gas->SetPressure(p);
  gas->SetComposition("ne", 0.0, "ch4", 0.0, "xe", 100.0);              //since the implemented decay model is only valid for pure noble gases,
					       //the first argument of this comand should be one of:
                                                // 1- "ne"
                                                // 2- "ar"
                                                // 3- "kr"
                                                // 4- "xe"

  // Build the geometry
  GeometrySimple* geo = new GeometrySimple();
  // Make a box
  SolidBox* box = new SolidBox(0.0, 0.0, 0.0,1.0, yGap + .2, 1.0);
  // Add the solid to the geometry, together with the medium inside
  geo->AddSolid(box, gas);

  // Make a component with analytic electric field
  ComponentAnalyticField* comp = new ComponentAnalyticField();
  comp->SetGeometry(geo);
  comp->AddPlaneY(0.0, 0.0,"b");
  comp->AddPlaneY(yGap+0.2, v,"t");
  
  // Make a sensor
  Sensor* sensor = new Sensor();
  sensor->AddComponent(comp);

  //class that stores information about each avalanche 
  EPrimary ep [npe]; 

  //create a Tree file tree4.root
  TFile f("output.root","RECREATE");
 
  // Make a microscopic tracking class for electron transport
  AvalancheMicroscopic* aval = new AvalancheMicroscopic();
  aval->SetSensor(sensor);
 
  //energy histogram:
  TH1D *histen = new TH1D("hen","energy distribution",1000,0.0,100.0);
  TH1D *histdiff = new TH1D("hdiff","transverse position ditribution (cm)",100,0.0,1.0);

  aval->EnableElectronEnergyHistogramming(histen);

  // loop over initial electron energies
  double e0list[1] = {0.2};
  // double e0list[5] = {0.00001};

  for (int ne0=0; ne0<1; ne0++){


  // loop over initial energies

  // Calculate a few avalanches
  for (int i = 0; i<npe;i++) {

    //reset variables
    ep[i].clear();

    //intial conditions
    int nIonization = 100;
    double x0[nIonization];
    double y0[nIonization];
    double z0[nIonization];
    double e0[nIonization];
    double t0[nIonization];
    double dx[nIonization];
    double dy[nIonization];
    double dz[nIonization];
    for (int jj = 0; jj < nIonization; jj++) {
      x0[jj] = 0.0 ;
      y0[jj] = 0.2 + 10e-7 * jj;
      // the primary electrons are released 0.2 cm far way from the bottom electrode and drift toward the top electrode
      z0[jj] = 0.0;
      t0[jj] = 0.0;                          
      //      e0[jj] = e0list[ne0];
      e0[jj] = RndmUniform()*8.0 ; // uniform energy distribution
      dx[jj] = 0.;
      dy[jj] = 0.;
      dz[jj] = 0.0;
    }
    //    double e0 = 1.;                                                     // starting energy [eV]
    // force always same energy Azriel    if (i!=0) {e0 = histen->GetRandom();}                               // generate energy randomly accordingly to previous collisions
    std::cout << "Avalanche "<< i+1 << " of " << npe << ":\n";
    std::cout << "the primary electron started its drift at (x,y,z,) = ( "<< x0 << " , " << y0 << " , " << z0 << ") [cm] with an energy of " << e0 << " [eV]\n";

    //    aval->AvalancheElectron(x0, y0, z0, t0, e0, 0., 0., 0.);            // simulate the avalanche
    // aval->SetTimeWindow(0.,100.0); // for now limit electron tracking to 1 nsec
    aval->SetTimeWindow(0.,10.0); // test short time window
    aval->AvalancheCloud(nIonization, x0, y0, z0, t0, e0, dx, dy, dz);            // simulate a cloud
    aval->GetAvalancheSize(ep[i].ne,ep[i].ni);                                // # of electrons and of ions 

    // get information about all the lectrons produced in the avalanche
    for (int ie=0;ie<ep[i].ne;ie++){
      double x0, y0, z0, t0, e0;
      double x1, y1, z1, t1, e1;
      int status;
      aval->GetElectronEndpoint(ie,x0,y0,z0,t0,e0,x1,y1,z1,t1,e1,status);
      if (status==-5){                                             // The electron left the drift medium
	if (y1<0.0001){ep[i].nBottomPlane=ep[i].nBottomPlane+1;}
	else if (y1>(yGap-0.0001)) {ep[i].nTopPlane=ep[i].nTopPlane+1;}
	std::cout << "(x1,y1,z1)= (" << x1 << "," << y1 << "," << z1 << "), t1= " << t1 << ", e1= " << e1 << "\n";
	histdiff->Fill(sqrt(x1*x1+z1*z1));
      }
      else {
	std::cout << "\nInformation about electron " << ie << " from avalanche " << i;
	std::cout << " which ended with a strange status:\n";
	std::cout << "(x0,y0,z0)= (" << x0 << "," << y0 << "," << z0 << "), t0= " << t0 << ", e0= " << e0 << "\n";
	std::cout << "(x1,y1,z1)= (" << x1 << "," << y1 << "," << z1 << "), t1= " << t1 << ", e1= " << e1 << "\n";
	std::cout << "status = " << status << "\n\n";
      }
    }
    int nElastic;
    int nIonising;
    int nAttachment;
    int nInelastic;
    int nExcitation;
    int nSuperelastic;
    gas-> GetNumberOfElectronCollisions(nElastic,nIonising,nAttachment,nInelastic,nExcitation,nSuperelastic);
    ep[i].nExc = nExcitation;
    ep[i].nElastic = nElastic;
    gas->ResetCollisionCounters();                                      //the gas accumulates collissions from all avalanches by default
    ep[i].print();
  }

  // Determine the maximum number of vuv photons emitted in an avalanche
  double nVUVMin=1e8;
  double nVUVMax=0;
  for (int i = 0; i<npe;i++) {
    if ((ep[i].nExc+ep[i].ni) < nVUVMin) {nVUVMin = (ep[i].nExc+ep[i].ni);}
    if ((ep[i].nExc+ep[i].ni) > nVUVMax) {nVUVMax = (ep[i].nExc+ep[i].ni);}
  }

  //construct and fill distributions of the # of VUV photons
  TH1D *hVUV = new TH1D("hVUV","nVUV distribution",nVUVMax-nVUVMin,nVUVMin,nVUVMax);
  hVUV->StatOverflows(kTRUE); 

  for (int i = 0; i<npe;i++) {
    hVUV->Fill(ep[i].nExc+ep[i].ni);
  }

  std::cout << "\n\nAverage number of emitted VUV photons: " << hVUV->GetMean() << "\n"; 
  std::cout << "Determined value of J: " << (hVUV->GetRMS()*hVUV->GetRMS()) / hVUV->GetMean() << "\n"; 

  histen->Write();
  hVUV->Write();
  histdiff->Write();

  }
  delete gas;
  delete geo;
  delete box;
  delete comp;
  delete sensor;
  delete aval;
  delete histen;
  f.Close();
  }
}

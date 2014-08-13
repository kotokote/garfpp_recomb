#include <iostream>
#include <sstream>
#include <fstream>

#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>

void makeroot(TString input_filename, TString output_filename){
  
  ifstream fin(input_filename.Data());
  Double_t cm_to_um = 1.0e4;

  const Int_t ne_max = 100;
  Int_t ne = 0;
  Int_t id[ne_max];
  Double_t x[ne_max];
  Double_t y[ne_max];
  Double_t z[ne_max];
  Double_t t[ne_max];
  Double_t kE[ne_max];


  TFile * fout = new TFile(output_filename.Data(),"recreate");
  TTree * tr = new TTree("tr","Electrons");
  tr->Branch("ne",&ne,"ne/I");
  tr->Branch("id",id,"id[ne]/I");
  tr->Branch("x",x,"x[ne]/D");
  tr->Branch("y",y,"y[ne]/D");
  tr->Branch("z",z,"z[ne]/D");
  tr->Branch("t",t,"t[ne]/D");
  tr->Branch("kE",kE,"kE[ne]/D");
  

  
  string line;

  Int_t count = 0;

  const Int_t nframes = 10000;

  string stmp;
  Int_t iframe;
  Double_t time;
  Int_t iele;
  Double_t x_tmp, y_tmp, z_tmp, t_tmp, kE_tmp,potential,kx,ky,kz,minDistIon;
  TString dummy;

  Int_t cur_frame = 0;

  
  while (true){
    getline(fin,line);
    if(!fin.good()) break;
    if(line.empty()) continue;
    istringstream lineStr(line);
    if(lineStr.peek()=='#'){
      // Skip lines starting with '#'
      continue;
    }
    lineStr >> stmp;
    if (stmp == "movie"){
      //      cout <<line << endl;
      //      count ++;

      lineStr >> stmp >> iframe >> stmp >> stmp >>  time >> stmp >> stmp >> stmp >> iele;
      //      cout << iframe <<" " <<  time << " " << iele << endl;;

      getline(fin,line);
      istringstream lineStr2(line);
      lineStr2 >> x_tmp >> y_tmp >> z_tmp >> t_tmp >> kE_tmp >> potential >> kx >> ky >> kz >> minDistIon;
      
      x_tmp*= cm_to_um;
      y_tmp*= cm_to_um;
      z_tmp*= cm_to_um;

      id[ne] = iele;
      x[ne] = x_tmp;
      y[ne] = y_tmp;
      z[ne] = z_tmp;
      t[ne] = t_tmp;
      kE[ne] = kE_tmp;
      ne++;
      
      if (cur_frame != iframe){
	// fill tree here
	tr->Fill();
	ne = 0;
      }
      
    }
  }

  fout->Close();
  
}

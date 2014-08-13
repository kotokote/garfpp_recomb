#include <iostream>
#include <sstream>
#include <fstream>

#include <TROOT.h>
#include <TH2D.h>
#include <TCanvas.h>

void make_movie(TString gas_type = "pureXe_10atm_0t"){
  TString filename = "test_"+gas_type+".txt";
  ifstream fin(filename.Data());
  Double_t cm_to_um = 1.0e4;
  
  string line;

  Int_t count = 0;

  const Int_t nframes = 10000;

  string stmp;
  Int_t iframe;
  Double_t time;
  Int_t iele;
  Double_t x, y, z, t, kE,potential,kx,ky,kz,minDistIon;
  TString dummy;

  TH2D * h_xy = new TH2D("h_xy",";X (#mum);Y (#mum)",1000,-10,10,1000,-10,10);
  TH2D * h_zy = new TH2D("h_zy",";Z (#mum);Y (#mum)",1000,-10,10,1000,-10,10);
  TH2D * h_xz = new TH2D("h_xz",";X (#mum);Z (#mum)",1000,-10,10,1000,-10,10);

  h_xy->SetMarkerStyle(7);
  h_zy->SetMarkerStyle(7);
  h_xz->SetMarkerStyle(7);

  Int_t cur_frame = 0;
  TCanvas * c1 = new TCanvas("c1","c1",1200,1200);
  c1->Divide(2,2);

  
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
      lineStr2 >> x >> y >> z >> t >> kE >> potential >> kx >> ky >> kz >> minDistIon;
      x*= cm_to_um;
      y*= cm_to_um;
      z*= cm_to_um;
      if (iele == 2) cout << x << " " << y << " " << z << " " << t << endl;

      
      if (cur_frame > 200) break;
      if (cur_frame != iframe){
        cur_frame = iframe;
        c1->cd(1);
        h_xy->Draw();
        c1->cd(2);
        h_zy->Draw();
        c1->cd(3);
        h_xz->Draw();
        // 	c1->Update();
        // 	cin >> dummy;
        
        c1->Print(Form("frames_%s/test_%4.4d.png",gas_type.Data(),cur_frame));
        h_xy->Reset();
        h_zy->Reset();
        h_xz->Reset();
      }
      h_xy->Fill(x,y);
      h_zy->Fill(z,y);
      h_xz->Fill(x,z);

      
    }
  }

  // //Draw the last frame
  // c1->cd(1);
  // h_xy->Draw("zcol");
  // c1->cd(2);
  // h_zy->Draw("zcol");
  // c1->Print(Form("frames/test_%d.png",cur_frame));
  

}

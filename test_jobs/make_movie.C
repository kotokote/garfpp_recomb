#include <iostream>
#include <sstream>
#include <fstream>

#include <TROOT.h>
#include <TH2D.h>
#include <TCanvas.h>

void make_movie(){
  TString filename = "test.txt";
  ifstream fin(filename.Data());

  string line;

  Int_t count = 0;

  const Int_t nframes = 10000;

  string stmp;
  Int_t iframe;
  Double_t time;
  Int_t iele;
  Double_t x, y, z, t, kE,potential,kx,ky,kz,minDistIon;
  TString dummy;

  TH2D * h_xy = new TH2D("h_xy","h_xy",100,-0.001,0.001,100,-0.001,0.001);
  TH2D * h_zy = new TH2D("h_zy","h_zy",100,-0.001,0.001,100,-0.001,0.001);
  Int_t cur_frame = 0;
  TCanvas * c1 = new TCanvas("c1","c1",1200,600);
  c1->Divide(2,1);
  
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
      if (iele == 2) cout << x << " " << y << " " << z << " " << t << endl;

      
      if (cur_frame != iframe){
	c1->cd(1);
	h_xy->Draw("zcol");
	c1->cd(2);
	h_zy->Draw("zcol");
	// 	c1->Update();
	// 	cin >> dummy;
	
	c1->Print("test.gif+1");
	h_xy->Reset();
	h_zy->Reset();
	cur_frame = iframe;
      }
      h_xy->Fill(x,y);
      h_zy->Fill(z,y);

      
    }
  }

  //Draw the last frame
  c1->cd(1);
  h_xy->Draw("zcol");
  c1->cd(2);
  h_zy->Draw("zcol");
  c1->Print("test.gif+1");
  

}

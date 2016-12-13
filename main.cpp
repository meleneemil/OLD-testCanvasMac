#include <iostream>
#include "TApplication.h"
#include "TSystem.h"
#include "TCanvas.h"

#include <TCanvas.h>
#include <TVirtualX.h>
#include <TSystem.h>
#include <TStyle.h>
#include <TFormula.h>
#include <TF1.h>
#include <TH1.h>
#include <TFrame.h>
#include <TTimer.h>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	TApplication rootapp("mmDaq Online Monitoring", &argc, argv);
	rootapp.SetReturnFromRun(true);

TCanvas *c = new TCanvas();
//c->Show();
 TH1F *h=new TH1F("h","Test",100,-10,10);
h->FillRandom("gaus",100000);
h->Draw();

gSystem->ProcessEvents();

//rootapp.Run();

h->FillRandom("gaus",100000);
c->Modified();
c->Update();
gSystem->ProcessEvents();

//c->Show();
rootapp.Run();
return 0;
}


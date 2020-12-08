//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Label1->Visible = false;
    Label2->Visible = false;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//Chargement de la DLL
	g_dasusbdll = LoadLibrary(L"DasHard2006.dll");
	//Verification du chargement
	if (g_dasusbdll)
	DasUsbCommand = (DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll, "DasUsbCommand");

	interface_open =DasUsbCommand(DHC_INIT,0, NULL);

	LinkLabel1->Caption = interface_open;

	interface_open = DasUsbCommand(DHC_OPEN,0,0);
	LinkLabel1->Caption = interface_open;

	if (interface_open>0)
	{
	Button1->Visible = false;
	Label1->Color = true;
    Label1->Visible = true;
	int i;
	for(i=0 ; i<DMX_MAXCHANNEL + 1; i++){
	dmxBlock[i]=0;
	}


	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------



void __fastcall TForm1::colorbarChange(TObject *Sender)
{
              dmxBlock[0]=colorbar->Position;
	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::colorbar2Change(TObject *Sender)
{
      dmxBlock[1]=colorbar2->Position;
	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::colorbar3Change(TObject *Sender)
{
	   dmxBlock[2]=colorbar3->Position;
	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::colorbar4Change(TObject *Sender)
{
			dmxBlock[3]=colorbar4->Position;
	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
         if (interface_open>0)
	{

	int i;
	for(i=0 ; i<DMX_MAXCHANNEL + 1; i++){
	dmxBlock[i]=TrackBar1->Position;
	}


	DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Label1->Visible = false;
	Label2->Visible = true;
	Button1->Visible = true;
    Button2->Visible = false;
}
//---------------------------------------------------------------------------




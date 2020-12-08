//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DasHard.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#define DMX_MAXCHANNEL 512

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Button1;
	TLinkLabel *LinkLabel1;
	TTrackBar *colorbar;
	TButton *Button2;
	TTrackBar *colorbar2;
	TTrackBar *colorbar3;
	TTrackBar *colorbar4;
	TTrackBar *TrackBar1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Button1Click(TObject *Sender);

	void __fastcall colorbarChange(TObject *Sender);
	void __fastcall colorbar2Change(TObject *Sender);
	void __fastcall colorbar3Change(TObject *Sender);
	void __fastcall colorbar4Change(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);

	HINSTANCE g_dasusbdll;
	typedef int (*DASHARDCOMMAND)(int, int, unsigned char*);
	DASHARDCOMMAND DasUsbCommand ;
	int interface_open;

	unsigned char dmxBlock[512];
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

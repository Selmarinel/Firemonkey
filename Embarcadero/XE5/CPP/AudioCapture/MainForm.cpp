//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "FMX.Media.hpp"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if (MyAudio != NULL) {
	if (Button1->Text == "Start Audio Capture") {
	  SaveDialog1->Filter = TMediaCodecManager::GetFilterStringByType(TMediaType::Audio);
	  // set filename for audio capture
	  if (SaveDialog1->Execute()) {
		MyAudio->FileName = SaveDialog1->FileName;
		AudioFileLabel->Text = SaveDialog1->FileName;
		Button1->Text = "Stop Audio Capture";
		MyAudio->StartCapture();
	  }
	}
	else {
	  MyAudio->StopCapture();
	  Button1->Text = "Start Audio Capture";
	}
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  MyAudio = TCaptureDeviceManager::Current->DefaultAudioCaptureDevice;
}
//---------------------------------------------------------------------------


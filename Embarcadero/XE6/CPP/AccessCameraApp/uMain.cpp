
//---------------------------------------------------------------------------

// This software is Copyright (c) 2014 Embarcadero Technologies, Inc. 
// You may only use this software if you are an authorized licensee
// of an Embarcadero developer tools product.
// This software is considered a Redistributable as defined under
// the software license agreement that comes with the Embarcadero Products
// and is subject to that software license agreement.

//---------------------------------------------------------------------------
// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "uMain.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAccessCameraAppForm *AccessCameraAppForm;

// ---------------------------------------------------------------------------
__fastcall TAccessCameraAppForm::TAccessCameraAppForm(TComponent* Owner)
	: TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TAccessCameraAppForm::TakePhotoFromCameraAction1DidFinishTaking
	(TBitmap *Image)
{
	/* Assign the image retrieved from the Camera to the TImage component. */
	imgCameraImage->Bitmap->Assign(Image);
}
// ---------------------------------------------------------------------------

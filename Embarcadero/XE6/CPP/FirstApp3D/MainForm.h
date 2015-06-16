//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Forms3D.hpp>
#include <FMX.Materials.hpp>
#include <FMX.Objects3D.hpp>
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.MaterialSources.hpp>
//---------------------------------------------------------------------------
class TForm3D4 : public TForm3D
{
__published:	// IDE-managed Components
	TSphere *Sphere1;
	TColorMaterialSource *ColorMaterialSource1;
	TCube *Cube1;
	TColorMaterialSource *ColorMaterialSource2;
	TCylinder *Cylinder1;
	TColorMaterialSource *ColorMaterialSource3;
	TRectangle3D *Rectangle3D1;
	TCamera *Camera1;
	TFloatAnimation *FloatAnimation1;
	void __fastcall Rectangle3D1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3D4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3D4 *Form3D4;
//---------------------------------------------------------------------------
#endif

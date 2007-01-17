// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWScreenInfo.pas' rev: 6.00

#ifndef ArcIWScreenInfoHPP
#define ArcIWScreenInfoHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <IWTypes.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwscreeninfo
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TArcIWClientScreen
{
	int availHeight;
	int availLeft;
	int availTop;
	int availWidth;
	int colorDepth;
	int height;
	int pixelDepth;
	int top;
	int width;
} ;
#pragma pack(pop)

class DELPHICLASS TArcIWScreenInfo;
class PASCALIMPLEMENTATION TArcIWScreenInfo : public Iwcontrol::TIWControl 
{
	typedef Iwcontrol::TIWControl inherited;
	
private:
	TArcIWClientScreen FClientScreen;
	Classes::TNotifyEvent FOnHasData;
	
protected:
	virtual void __fastcall SetValue(const AnsiString AValue);
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWScreenInfo(Classes::TComponent* AOwner);
	
__published:
	__property TArcIWClientScreen ClientScreen = {read=FClientScreen};
	__property Classes::TNotifyEvent OnHasData = {read=FOnHasData, write=FOnHasData};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWScreenInfo(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwscreeninfo */
using namespace Arciwscreeninfo;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWScreenInfo

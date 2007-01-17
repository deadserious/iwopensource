// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWToolWindow.pas' rev: 6.00

#ifndef ArcIWToolWindowHPP
#define ArcIWToolWindowHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Controls.hpp>	// Pascal unit
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwtoolwindow
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TArcIWToolWindow;
class PASCALIMPLEMENTATION TArcIWToolWindow : public Iwcontrol::TIWControl 
{
	typedef Iwcontrol::TIWControl inherited;
	
private:
	AnsiString FCaption;
	AnsiString FText;
	Graphics::TColor FBackgroundColor;
	Graphics::TColor FBorderColor;
	AnsiString FURL;
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWToolWindow(Classes::TComponent* AOwner);
	
__published:
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property AnsiString Text = {read=FText, write=FText};
	__property AnsiString URL = {read=FURL, write=FURL};
	__property Graphics::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property Graphics::TColor BackgroundColor = {read=FBackgroundColor, write=FBackgroundColor, nodefault};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWToolWindow(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwtoolwindow */
using namespace Arciwtoolwindow;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWToolWindow

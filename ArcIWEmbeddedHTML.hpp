// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWEmbeddedHTML.pas' rev: 6.00

#ifndef ArcIWEmbeddedHTMLHPP
#define ArcIWEmbeddedHTMLHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwembeddedhtml
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TFrameAlignment { faNone, faTop, faMiddle, faBottom, faLeft, faRight };
#pragma option pop

#pragma option push -b-
enum TScrollbarStyle { sbShow, sbHide, sbAuto };
#pragma option pop

#pragma option push -b-
enum TBorderStyle { bsNone, bsSingle };
#pragma option pop

#pragma option push -b-
enum TArcSizeMetrics { smPixels, smPercent };
#pragma option pop

class DELPHICLASS TArcIWEmbeddedHTML;
class PASCALIMPLEMENTATION TArcIWEmbeddedHTML : public Iwcontrol::TIWControl 
{
	typedef Iwcontrol::TIWControl inherited;
	
private:
	int FMarginHeight;
	int FMarginWidth;
	AnsiString FDescriptionURL;
	AnsiString FSourceURL;
	TFrameAlignment FAlignment;
	TScrollbarStyle FScrollBars;
	TBorderStyle FBorderStyle;
	AnsiString FFrameName;
	TArcSizeMetrics FSizeMetrics;
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWEmbeddedHTML(Classes::TComponent* AOwner);
	
__published:
	__property AnsiString SourceURL = {read=FSourceURL, write=FSourceURL};
	__property AnsiString DescriptionURL = {read=FDescriptionURL, write=FDescriptionURL};
	__property TFrameAlignment Alignment = {read=FAlignment, write=FAlignment, default=0};
	__property TBorderStyle BorderStyle = {read=FBorderStyle, write=FBorderStyle, default=1};
	__property int MarginWidth = {read=FMarginWidth, write=FMarginWidth, nodefault};
	__property int MarginHeight = {read=FMarginHeight, write=FMarginHeight, nodefault};
	__property TScrollbarStyle ScrollBars = {read=FScrollBars, write=FScrollBars, default=2};
	__property AnsiString FrameName = {read=FFrameName, write=FFrameName};
	__property TArcSizeMetrics SizeMetrics = {read=FSizeMetrics, write=FSizeMetrics, nodefault};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWEmbeddedHTML(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwembeddedhtml */
using namespace Arciwembeddedhtml;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWEmbeddedHTML

// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWOperaListbox.pas' rev: 6.00

#ifndef ArcIWOperaListboxHPP
#define ArcIWOperaListboxHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <ArcIWOperaFix.hpp>	// Pascal unit
#include <IWTypes.hpp>	// Pascal unit
#include <IWCompListbox.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwoperalistbox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TArcIWOperaListbox;
class PASCALIMPLEMENTATION TArcIWOperaListbox : public Iwcomplistbox::TIWListbox 
{
	typedef Iwcomplistbox::TIWListbox inherited;
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWOperaListbox(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWOperaListbox(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwoperalistbox */
using namespace Arciwoperalistbox;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWOperaListbox

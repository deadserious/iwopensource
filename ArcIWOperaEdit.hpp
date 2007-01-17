// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWOperaEdit.pas' rev: 6.00

#ifndef ArcIWOperaEditHPP
#define ArcIWOperaEditHPP

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
#include <IWCompEdit.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwoperaedit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TArcIWOperaEdit;
class PASCALIMPLEMENTATION TArcIWOperaEdit : public Iwcompedit::TIWEdit 
{
	typedef Iwcompedit::TIWEdit inherited;
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWOperaEdit(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWOperaEdit(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwoperaedit */
using namespace Arciwoperaedit;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWOperaEdit

// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWImageURL.pas' rev: 6.00

#ifndef ArcIWImageURLHPP
#define ArcIWImageURLHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWVCLClasses.hpp>	// Pascal unit
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWTypes.hpp>	// Pascal unit
#include <ArcIWOperaFix.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <IWHTMLControls.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWScriptEvents.hpp>	// Pascal unit
#include <IWExtCtrls.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwimageurl
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TArcIWImageURL;
class PASCALIMPLEMENTATION TArcIWImageURL : public Iwextctrls::TIWImage 
{
	typedef Iwextctrls::TIWImage inherited;
	
protected:
	Iwhtmlcontrols::TIWURLTarget* FTargetOptions;
	bool FTerminateApp;
	bool FUseTarget;
	AnsiString FURL;
	void __fastcall SetTerminateApp(const bool AValue);
	void __fastcall SetUseTarget(const bool AValue);
	virtual void __fastcall HookEvents(Iwrendercontext::TIWPageContext40* APageContext, Iwscriptevents::TIWScriptEvents* AScriptEvents);
	
public:
	__fastcall virtual TArcIWImageURL(Classes::TComponent* AOwner);
	__fastcall virtual ~TArcIWImageURL(void);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	
__published:
	__property Iwhtmlcontrols::TIWURLTarget* TargetOptions = {read=FTargetOptions, write=FTargetOptions};
	__property bool TerminateApp = {read=FTerminateApp, write=FTerminateApp, nodefault};
	__property bool UseTarget = {read=FUseTarget, write=FUseTarget, nodefault};
	__property Enabled  = {default=1};
	__property ExtraTagParams ;
	__property ScriptEvents ;
	__property AnsiString URL = {read=FURL, write=FURL};
};


class DELPHICLASS TArcIWImageFileURL;
class PASCALIMPLEMENTATION TArcIWImageFileURL : public Iwextctrls::TIWImageFile 
{
	typedef Iwextctrls::TIWImageFile inherited;
	
private:
	Iwhtmlcontrols::TIWURLTarget* FTargetOptions;
	bool FTerminateApp;
	bool FUseTarget;
	AnsiString FURL;
	void __fastcall SetTerminateApp(const bool AValue);
	void __fastcall SetUseTarget(const bool AValue);
	virtual void __fastcall HookEvents(Iwrendercontext::TIWPageContext40* APageContext, Iwscriptevents::TIWScriptEvents* AScriptEvents);
	
public:
	__fastcall virtual TArcIWImageFileURL(Classes::TComponent* AOwner);
	__fastcall virtual ~TArcIWImageFileURL(void);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	
__published:
	__property Iwhtmlcontrols::TIWURLTarget* TargetOptions = {read=FTargetOptions, write=FTargetOptions};
	__property bool TerminateApp = {read=FTerminateApp, write=FTerminateApp, nodefault};
	__property bool UseTarget = {read=FUseTarget, write=FUseTarget, nodefault};
	__property Enabled  = {default=1};
	__property ExtraTagParams ;
	__property ScriptEvents ;
	__property AnsiString URL = {read=FURL, write=FURL};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwimageurl */
using namespace Arciwimageurl;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWImageURL

// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWPageController.pas' rev: 6.00

#ifndef ArcIWPageControllerHPP
#define ArcIWPageControllerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Controls.hpp>	// Pascal unit
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwpagecontroller
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TScreenConstraint;
class PASCALIMPLEMENTATION TScreenConstraint : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FHeight;
	int FWidth;
	AnsiString FRedirect;
	AnsiString FAlert;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
__published:
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property AnsiString Alert = {read=FAlert, write=FAlert};
	__property AnsiString Redirect = {read=FRedirect, write=FRedirect};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScreenConstraint(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TScreenConstraint(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TArcIWPageController;
class PASCALIMPLEMENTATION TArcIWPageController : public Iwcontrol::TIWControl 
{
	typedef Iwcontrol::TIWControl inherited;
	
private:
	bool FMaximize;
	void __fastcall SetScreenMaximum(const TScreenConstraint* Value);
	void __fastcall SetScreenMinimum(const TScreenConstraint* Value);
	
protected:
	bool FPopOut;
	bool FRightClickAllowed;
	AnsiString FRightClickAlert;
	bool FTextSelectAllowed;
	TScreenConstraint* FScreenMinimum;
	TScreenConstraint* FScreenMaximum;
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TArcIWPageController(Classes::TComponent* AOwner);
	__fastcall virtual ~TArcIWPageController(void);
	
__published:
	__property bool PopOut = {read=FPopOut, write=FPopOut, nodefault};
	__property bool RightClickAllowed = {read=FRightClickAllowed, write=FRightClickAllowed, default=1};
	__property AnsiString RightClickAlert = {read=FRightClickAlert, write=FRightClickAlert};
	__property TScreenConstraint* ScreenMinimum = {read=FScreenMinimum, write=SetScreenMinimum, stored=true};
	__property TScreenConstraint* ScreenMaximum = {read=FScreenMaximum, write=SetScreenMaximum, stored=true};
	__property bool TextSelectAllowed = {read=FTextSelectAllowed, write=FTextSelectAllowed, default=1};
	__property bool Maximize = {read=FMaximize, write=FMaximize, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwpagecontroller */
using namespace Arciwpagecontroller;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWPageController

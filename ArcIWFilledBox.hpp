// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWFilledBox.pas' rev: 6.00

#ifndef ArcIWFilledBoxHPP
#define ArcIWFilledBoxHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWScriptEvents.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWStreams.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <SWSystem.hpp>	// Pascal unit
#include <ArcIWOperaFix.hpp>	// Pascal unit
#include <IWTypes.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <jpeg.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwfilledbox
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TArcIWFilledBoxOnMouseDown)(System::TObject* ASender, const int AX, const int AY);

class DELPHICLASS TArcIWFilledBox;
class PASCALIMPLEMENTATION TArcIWFilledBox : public Iwcontrol::TIWControl 
{
	typedef Iwcontrol::TIWControl inherited;
	
private:
	Graphics::TColor FFillColor;
	Graphics::TColor FBorderColor;
	Graphics::TBrushStyle FFillStyle;
	Graphics::TPenStyle FBorderStyle;
	int FBorderWidth;
	TArcIWFilledBoxOnMouseDown FOnMouseDown;
	TArcIWFilledBox* FFriend;
	Jpeg::TJPEGQualityRange FJPGQuality;
	void __fastcall SetFillColor(const Graphics::TColor Value);
	void __fastcall SetBorderColor(const Graphics::TColor Value);
	void __fastcall SetBorderStyle(const Graphics::TPenStyle Value);
	void __fastcall SetFillStyle(const Graphics::TBrushStyle Value);
	void __fastcall SetBorderWidth(const int Value);
	Classes::TNotifyEvent __fastcall GetOnClick();
	void __fastcall SetOnClick(const Classes::TNotifyEvent Value);
	void __fastcall SetOnMouseDown(const TArcIWFilledBoxOnMouseDown Value);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Submit(const AnsiString AValue);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall FindNewFriend(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	void __fastcall LoadCompProperty(Classes::TReader* Reader);
	void __fastcall StoreCompProperty(Classes::TWriter* Writer);
	DYNAMIC void __fastcall Resize(void);
	virtual void __fastcall IWPaint(void);
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual TArcIWFilledBox(Classes::TComponent* AOwner);
	__property TArcIWFilledBox* Friend = {read=FFriend, write=FFriend};
	
__published:
	__property Graphics::TColor FillColor = {read=FFillColor, write=SetFillColor, default=8388608};
	__property Graphics::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property Graphics::TBrushStyle FillStyle = {read=FFillStyle, write=SetFillStyle, default=0};
	__property Graphics::TPenStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=1};
	__property Jpeg::TJPEGQualityRange JPGQuality = {read=FJPGQuality, write=FJPGQuality, default=95};
	__property DoSubmitValidation ;
	__property ScriptEvents ;
	__property Classes::TNotifyEvent OnClick = {read=GetOnClick, write=SetOnClick};
	__property TArcIWFilledBoxOnMouseDown OnMouseDown = {read=FOnMouseDown, write=SetOnMouseDown};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWFilledBox(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Arciwfilledbox */
using namespace Arciwfilledbox;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWFilledBox

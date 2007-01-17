// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ArcIWPaypalLink.pas' rev: 6.00

#ifndef ArcIWPaypalLinkHPP
#define ArcIWPaypalLinkHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IWVCLBaseControl.hpp>	// Pascal unit
#include <IWBaseControl.hpp>	// Pascal unit
#include <IWBaseHTMLControl.hpp>	// Pascal unit
#include <IWHTMLTag.hpp>	// Pascal unit
#include <IWRenderContext.hpp>	// Pascal unit
#include <ArcIWOperaFix.hpp>	// Pascal unit
#include <IWControl.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Arciwpaypallink
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TArcIWDefImageDonation { dfdRounded, dfdCCDButton, dfdPaypal, dfdStandard };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__1[4];

#pragma option push -b-
enum TArcIWDefImageSubscription { dfsCCDButton1, dfsCCDButton2, dfsPaypal1, dfsPaypal2, dfsRounded, dfsStandard };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__2[6];

#pragma option push -b-
enum TArcIWDefImageSubscriptionCancel { dfscRounded1, dfscRounded2, dfscStandard };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__3[3];

#pragma option push -b-
enum TArcIWDefImageItemPurchase { dfiRounded, dfiCCDButton, dfiPaypal1, dfiPaypal2, dfiPaypal3, dfiStandard, dfiPaypalBig1, dfiPaypalBig2 };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__4[8];

#pragma option push -b-
enum TArcIWDefImageAddToCart { dfacRounded, dfacAddImage, dfacPaypalBig, dfacPaypal, dfacStandard };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__5[5];

#pragma option push -b-
enum TArcIWDefImageViewCart { dfvcViewImage, dfvcRounded, dfvcStandard1, dfvcStandard2 };
#pragma option pop

typedef AnsiString ArcIWPaypalLink__6[4];

class DELPHICLASS TArcIWPayPalBase;
class PASCALIMPLEMENTATION TArcIWPayPalBase : public Iwcontrol::TIWCustomControl 
{
	typedef Iwcontrol::TIWCustomControl inherited;
	
protected:
	bool FUseBorder;
	bool FAutoSize;
	AnsiString FPaypalAccount;
	AnsiString FSuccessURL;
	AnsiString FLogoURL;
	AnsiString FAltText;
	AnsiString FImageURL;
	AnsiString FCancelURL;
	virtual AnsiString __fastcall GetImageProps();
	virtual AnsiString __fastcall FixText(AnsiString txt);
	HIDESBASE virtual void __fastcall SetAutoSize(const bool Value);
	virtual void __fastcall ResizeSelf(void);
	
public:
	__fastcall virtual TArcIWPayPalBase(Classes::TComponent* AOwner);
	__property AnsiString URLSuccess = {read=FSuccessURL, write=FSuccessURL};
	__property AnsiString URLCancel = {read=FCancelURL, write=FCancelURL};
	
__published:
	__property AnsiString URLImage = {read=FImageURL, write=FImageURL};
	__property AnsiString PaypalAccount = {read=FPaypalAccount, write=FPaypalAccount};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, nodefault};
	__property AnsiString AltText = {read=FAltText, write=FAltText};
	__property bool UseBorder = {read=FUseBorder, write=FUseBorder, nodefault};
	__property AnsiString URLLogo = {read=FLogoURL, write=FLogoURL};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWPayPalBase(void) { }
	#pragma option pop
	
};


class DELPHICLASS TArcIWPayPalDonation;
class PASCALIMPLEMENTATION TArcIWPayPalDonation : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
protected:
	AnsiString FSpecialInstructions;
	double FDonationAmount;
	TArcIWDefImageDonation FDefaultImage;
	AnsiString FDonationText;
	AnsiString FDonationID;
	virtual void __fastcall SetDefaultImage(const TArcIWDefImageDonation Value);
	virtual void __fastcall ResizeSelf(void);
	
public:
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	
__published:
	__property AnsiString DonationID = {read=FDonationID, write=FDonationID};
	__property AnsiString DonationText = {read=FDonationText, write=FDonationText};
	__property double DonationAmount = {read=FDonationAmount, write=FDonationAmount};
	__property TArcIWDefImageDonation DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
	__property AnsiString SpecialInstructions = {read=FSpecialInstructions, write=FSpecialInstructions};
	__property URLSuccess ;
	__property URLCancel ;
public:
	#pragma option push -w-inl
	/* TArcIWPayPalBase.Create */ inline __fastcall virtual TArcIWPayPalDonation(Classes::TComponent* AOwner) : TArcIWPayPalBase(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWPayPalDonation(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TPayPalFrequency { pfDays, pfWeeks, pfMonths, pfYears };
#pragma option pop

class DELPHICLASS TPayPalPeriod;
class PASCALIMPLEMENTATION TPayPalPeriod : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	double FAmount;
	int FCycleLength;
	TPayPalFrequency FCycleFreq;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
__published:
	__property double Amount = {read=FAmount, write=FAmount};
	__property int CycleLength = {read=FCycleLength, write=FCycleLength, nodefault};
	__property TPayPalFrequency CycleFreq = {read=FCycleFreq, write=FCycleFreq, nodefault};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPayPalPeriod(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TPayPalPeriod(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TArcIWPayPalSubscriptionCancel;
class PASCALIMPLEMENTATION TArcIWPayPalSubscriptionCancel : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
private:
	TArcIWDefImageSubscriptionCancel FDefaultImage;
	void __fastcall SetDefaultImage(const TArcIWDefImageSubscriptionCancel Value);
	
protected:
	virtual void __fastcall ResizeSelf(void);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	
__published:
	__property TArcIWDefImageSubscriptionCancel DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
public:
	#pragma option push -w-inl
	/* TArcIWPayPalBase.Create */ inline __fastcall virtual TArcIWPayPalSubscriptionCancel(Classes::TComponent* AOwner) : TArcIWPayPalBase(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWPayPalSubscriptionCancel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TArcIWPayPalSubscription;
class PASCALIMPLEMENTATION TArcIWPayPalSubscription : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
private:
	TPayPalPeriod* FPeriodTrial1;
	TPayPalPeriod* FPeriodTrial2;
	TPayPalPeriod* FPeriodRegular;
	AnsiString FOption1;
	AnsiString FOption2;
	void __fastcall SetPeriodRegular(const TPayPalPeriod* Value);
	void __fastcall SetPeriodTrial1(const TPayPalPeriod* Value);
	void __fastcall SetPeriodTrial2(const TPayPalPeriod* Value);
	
protected:
	AnsiString FSubscriptionText;
	bool FPasswordManagement;
	TArcIWDefImageSubscription FDefaultImage;
	AnsiString FSubscriptionID;
	bool FReattemptOnFailure;
	bool FRecurring;
	int FStopRecurring;
	virtual void __fastcall SetDefaultImage(const TArcIWDefImageSubscription Value);
	virtual void __fastcall ResizeSelf(void);
	
public:
	char __fastcall GetPeriodLetter(TPayPalFrequency per);
	__fastcall virtual TArcIWPayPalSubscription(Classes::TComponent* AOwner);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual ~TArcIWPayPalSubscription(void);
	
__published:
	__property AnsiString SubscriptionID = {read=FSubscriptionID, write=FSubscriptionID};
	__property AnsiString SubscriptionText = {read=FSubscriptionText, write=FSubscriptionText};
	__property TPayPalPeriod* PeriodTrial1 = {read=FPeriodTrial1, write=SetPeriodTrial1};
	__property TPayPalPeriod* PeriodTrial2 = {read=FPeriodTrial2, write=SetPeriodTrial2};
	__property TPayPalPeriod* PeriodRegular = {read=FPeriodRegular, write=SetPeriodRegular};
	__property bool Recurring = {read=FRecurring, write=FRecurring, nodefault};
	__property int StopRecurring = {read=FStopRecurring, write=FStopRecurring, nodefault};
	__property bool ReattemptOnFailure = {read=FReattemptOnFailure, write=FReattemptOnFailure, nodefault};
	__property TArcIWDefImageSubscription DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
	__property bool PasswordManagement = {read=FPasswordManagement, write=FPasswordManagement, nodefault};
	__property AnsiString Option1 = {read=FOption1, write=FOption1};
	__property AnsiString Option2 = {read=FOption2, write=FOption2};
	__property URLSuccess ;
	__property URLCancel ;
};


class DELPHICLASS TArcIWPayPalAddToCart;
class PASCALIMPLEMENTATION TArcIWPayPalAddToCart : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
private:
	AnsiString FSpecialInstructions;
	AnsiString FOption1;
	AnsiString FOption2;
	
protected:
	TArcIWDefImageAddToCart FDefaultImage;
	AnsiString FItemText;
	AnsiString FItemID;
	double FItemAmount;
	virtual void __fastcall SetDefaultImage(const TArcIWDefImageAddToCart Value);
	virtual void __fastcall ResizeSelf(void);
	
public:
	__fastcall virtual TArcIWPayPalAddToCart(Classes::TComponent* AOwner);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual ~TArcIWPayPalAddToCart(void);
	
__published:
	__property AnsiString ItemID = {read=FItemID, write=FItemID};
	__property AnsiString ItemText = {read=FItemText, write=FItemText};
	__property double ItemAmount = {read=FItemAmount, write=FItemAmount};
	__property TArcIWDefImageAddToCart DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
	__property AnsiString Option1 = {read=FOption1, write=FOption1};
	__property AnsiString Option2 = {read=FOption2, write=FOption2};
	__property AnsiString SpecialInstructions = {read=FSpecialInstructions, write=FSpecialInstructions};
	__property URLSuccess ;
	__property URLCancel ;
};


class DELPHICLASS TArcIWPayPalViewCart;
class PASCALIMPLEMENTATION TArcIWPayPalViewCart : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
private:
	TArcIWDefImageViewCart FDefaultImage;
	void __fastcall SetDefaultImage(const TArcIWDefImageViewCart Value);
	
protected:
	virtual void __fastcall ResizeSelf(void);
	
public:
	__fastcall virtual TArcIWPayPalViewCart(Classes::TComponent* AOwner);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	
__published:
	__property TArcIWDefImageViewCart DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
public:
	#pragma option push -w-inl
	/* TIWVCLBaseControl.Destroy */ inline __fastcall virtual ~TArcIWPayPalViewCart(void) { }
	#pragma option pop
	
};


class DELPHICLASS TArcIWPayPalItemPurchase;
class PASCALIMPLEMENTATION TArcIWPayPalItemPurchase : public TArcIWPayPalBase 
{
	typedef TArcIWPayPalBase inherited;
	
private:
	bool FAskForQuantity;
	AnsiString FSpecialInstructions;
	AnsiString FOption1;
	AnsiString FOption2;
	
protected:
	AnsiString FItemText;
	AnsiString FItemID;
	TArcIWDefImageItemPurchase FDefaultImage;
	double FItemAmount;
	virtual void __fastcall SetDefaultImage(const TArcIWDefImageItemPurchase Value);
	virtual void __fastcall ResizeSelf(void);
	
public:
	__fastcall virtual TArcIWPayPalItemPurchase(Classes::TComponent* AOwner);
	virtual Iwhtmltag::TIWHTMLTag* __fastcall RenderHTML(Iwrendercontext::TIWBaseHTMLComponentContext* AContext);
	__fastcall virtual ~TArcIWPayPalItemPurchase(void);
	
__published:
	__property AnsiString ItemID = {read=FItemID, write=FItemID};
	__property AnsiString ItemText = {read=FItemText, write=FItemText};
	__property double ItemAmount = {read=FItemAmount, write=FItemAmount};
	__property TArcIWDefImageItemPurchase DefaultImage = {read=FDefaultImage, write=SetDefaultImage, nodefault};
	__property bool AskForQuantity = {read=FAskForQuantity, write=FAskForQuantity, nodefault};
	__property AnsiString Option1 = {read=FOption1, write=FOption1};
	__property AnsiString Option2 = {read=FOption2, write=FOption2};
	__property AnsiString SpecialInstructions = {read=FSpecialInstructions, write=FSpecialInstructions};
	__property URLSuccess ;
	__property URLCancel ;
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString ArcIWDefImageDonationURL[4];
extern PACKAGE int ArcIWDefImageDonationX[4];
extern PACKAGE int ArcIWDefImageDonationY[4];
extern PACKAGE AnsiString ArcIWDefImageSubscriptionURL[6];
extern PACKAGE int ArcIWDefImageSubscriptionX[6];
extern PACKAGE int ArcIWDefImageSubscriptionY[6];
extern PACKAGE AnsiString ArcIWDefImageSubscriptionCancelURL[3];
extern PACKAGE int ArcIWDefImageSubscriptionCancelX[3];
extern PACKAGE int ArcIWDefImageSubscriptionCancelY[3];
extern PACKAGE AnsiString ArcIWDefImageItemPurchaseURL[8];
extern PACKAGE int ArcIWDefImageItemPurchaseX[8];
extern PACKAGE int ArcIWDefImageItemPurchaseY[8];
extern PACKAGE AnsiString ArcIWDefImageAddToCartURL[5];
extern PACKAGE int ArcIWDefImageAddToCartX[5];
extern PACKAGE int ArcIWDefImageAddToCartY[5];
extern PACKAGE AnsiString ArcIWDefImageViewCartURL[4];
extern PACKAGE int ArcIWDefImageViewCartX[4];
extern PACKAGE int ArcIWDefImageViewCartY[4];

}	/* namespace Arciwpaypallink */
using namespace Arciwpaypallink;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ArcIWPaypalLink

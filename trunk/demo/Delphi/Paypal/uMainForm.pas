unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, IWHTMLControls, IWCompLabel, Classes,
  Controls, IWControl, ArcIWPaypalLink, IWCompRectangle, ArcIWEmbeddedHTML,
  Forms, IWContainer, IWRegion, IWCompCheckbox, IWCompButton,
  ArcIWOperaButton;

type
  TformMain = class(TIWAppForm)
    IWRegion1: TIWRegion;
    IWRectangle1: TIWRectangle;
    IWLabel4: TIWLabel;
    IWLabel1: TIWLabel;
    IWLabel2: TIWLabel;
    IWLabel3: TIWLabel;
    IWLabel5: TIWLabel;
    IWLabel6: TIWLabel;
    ArcIWPayPalDonation1: TArcIWPayPalDonation;
    ArcIWPayPalSubscription1: TArcIWPayPalSubscription;
    ArcIWPayPalItemPurchase1: TArcIWPayPalItemPurchase;
    ArcIWPayPalAddToCart1: TArcIWPayPalAddToCart;
    ArcIWPayPalAddToCart2: TArcIWPayPalAddToCart;
    ArcIWPayPalViewCart2: TArcIWPayPalViewCart;
    ArcIWPayPalSubscriptionCancel1: TArcIWPayPalSubscriptionCancel;
    IWLabel7: TIWLabel;
    IWLabel8: TIWLabel;
    chkNewWindow: TIWCheckBox;
    embPayPal: TArcIWEmbeddedHTML;
    procedure chkNewWindowClick(Sender: TObject);
    procedure IWAppFormRender(Sender: TObject);
  public
  end;

implementation
{$R *.dfm}

uses
  ServerController;

procedure TformMain.chkNewWindowClick(Sender: TObject);
begin
  // Leave blank, but needed to cause a Serverside event
end;

procedure TformMain.IWAppFormRender(Sender: TObject);
begin
  if chkNewWindow.Checked then
    embPayPal.FrameName := ''
  else
    embPayPal.FrameName := 'paypal';
end;

end.

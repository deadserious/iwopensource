unit ArcIWRegister;

interface

uses Classes;

procedure Register;

implementation

{$I IWVersion.inc}

uses ArcIWToolWindow, ArcIWScreenInfo, ArcIWPageController, ArcIWFilledBox,
  ArcIWEmbeddedHTML, ArcIWOperaButton, ArcIWOperaComboBox, ArcIWOperaEdit,
  ArcIWOperaGrid, ArcIWOperaListbox, ArcIWOperaMemo, ArcIWPaypalLink,
  ArcIWImageURL;


procedure Register;
begin
  RegisterComponents('IW Arcana', [TArcIWToolWindow, TArcIWScreenInfo,
                                   TArcIWEmbeddedHTML, TArcIWFilledBox,
                                   TArcIWPageController, TArcIWImageURL,
                                   TArcIWImageFileURL]);
  RegisterComponents('IW Opera', [ TArcIWOperaButton, TArcIWOperaComboBox,
                                   TArcIWOperaEdit, TArcIWOperaGrid,
                                   TArcIWOperaListbox, TArcIWOperaMemo]);
  RegisterComponents('IW PayPal', [TArcIWPayPalDonation, TArcIWPayPalSubscription,
                                   TArcIWPayPalSubscriptionCancel,
                                   TArcIWPayPalAddToCart, TArcIWPayPalViewCart,
                                   TArcIWPayPalItemPurchase]);
end;

end.

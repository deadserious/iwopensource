unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, IWCompButton, Classes, Controls,
  IWControl, ArcIWScreenInfo, IWCompLabel;

type
  TformMain = class(TIWAppForm)
    ScreenInfo: TArcIWScreenInfo;
    IWButton1: TIWButton;
    IWLabel1: TIWLabel;
    IWLabel2: TIWLabel;
    IWLabel3: TIWLabel;
    IWLabel4: TIWLabel;
    IWLabel5: TIWLabel;
    IWLabel6: TIWLabel;
    IWLabel7: TIWLabel;
    IWLabel8: TIWLabel;
    IWLabel9: TIWLabel;
    lblAvailHeight: TIWLabel;
    lblAvailWidth: TIWLabel;
    lblAvailLeft: TIWLabel;
    lblAvailTop: TIWLabel;
    lblTop: TIWLabel;
    lblPixelDepth: TIWLabel;
    lblHeight: TIWLabel;
    lblColorDepth: TIWLabel;
    lblWidth: TIWLabel;
    procedure IWButton1Click(Sender: TObject);
  public
  end;

implementation
{$R *.dfm}

uses
  SysUtils, ServerController;

procedure TformMain.IWButton1Click(Sender: TObject);
begin
  lblAvailHeight.Caption := IntToStr(ScreenInfo.ClientScreen.availHeight);
  lblAvailWidth.Caption  := IntToStr(ScreenInfo.ClientScreen.availWidth);
  lblAvailLeft.Caption   := IntToStr(ScreenInfo.ClientScreen.availLeft);
  lblAvailTop.Caption    := IntToStr(ScreenInfo.ClientScreen.availTop);
  lblTop.Caption         := IntToStr(ScreenInfo.ClientScreen.top);
  lblPixelDepth.Caption  := IntToStr(ScreenInfo.ClientScreen.pixelDepth);
  lblHeight.Caption      := IntToStr(ScreenInfo.ClientScreen.height);
  lblColorDepth.Caption  := IntToStr(ScreenInfo.ClientScreen.colorDepth);
  lblWidth.Caption       := IntToStr(ScreenInfo.ClientScreen.width);
end;

end.

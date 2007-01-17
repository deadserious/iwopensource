unit uMainForm;
{PUBDIST}

interface

uses
  SysUtils, IWAppForm, IWApplication, IWTypes, IWCompEdit, IWCompLabel, Classes,
  Controls, IWControl, ArcIWFilledBox;

type
  TformMain = class(TIWAppForm)
    ArcIWFilledBox1: TArcIWFilledBox;
    IWLabel1: TIWLabel;
    IWEdit1: TIWEdit;
    IWLabel2: TIWLabel;
    IWEdit2: TIWEdit;
    ArcIWFilledBox2: TArcIWFilledBox;
    ArcIWFilledBox3: TArcIWFilledBox;
    IWLabel3: TIWLabel;
    IWLabel4: TIWLabel;
    lblCoords: TIWLabel;
    procedure ArcIWFilledBox2Click(Sender: TObject);
    procedure ArcIWFilledBox3MouseDown(ASender: TObject; const AX,
      AY: Integer);
  public
  end;

implementation
{$R *.dfm}

uses
  ServerController;

procedure TformMain.ArcIWFilledBox2Click(Sender: TObject);
begin
  WebApplication.ShowMessage('Ain''t this special');
end;

procedure TformMain.ArcIWFilledBox3MouseDown(ASender: TObject; const AX,
  AY: Integer);
begin
  lblCoords.Text := IntToStr(AX)+'x'+IntToStr(AY);
end;

end.

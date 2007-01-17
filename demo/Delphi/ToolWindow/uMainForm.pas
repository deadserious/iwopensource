unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, ArcIWToolWindow, IWCompEdit, Classes,
  Controls, IWControl, IWCompLabel;

type
  TformMain = class(TIWAppForm)
    IWLabel1: TIWLabel;
    IWLabel2: TIWLabel;
    IWEdit1: TIWEdit;
    ArcIWToolWindow1: TArcIWToolWindow;
  public
  end;

implementation
{$R *.dfm}

uses
  ServerController;

end.

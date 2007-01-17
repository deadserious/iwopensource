program PayPalDemo;
{PUBDIST}

uses
  IWInitStandAlone,
  ServerController in 'ServerController.pas' {IWServerController: TDataModule},
  uMainForm in 'uMainForm.pas' {formMain: TIWForm1};

{$R *.res}

begin
  IWRun(TFormMain, TIWServerController);
end.

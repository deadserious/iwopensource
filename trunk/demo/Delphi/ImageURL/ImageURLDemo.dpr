program ImageURLDemo;
{PUBDIST}

uses
  IWInitStandAlone,
  ServerController in 'ServerController.pas' {IWServerController: TDataModule},
  uMain in 'uMain.pas' {formMain: TIWForm1};

{$R *.res}

begin
  IWRun(TFormMain, TIWServerController);
end.

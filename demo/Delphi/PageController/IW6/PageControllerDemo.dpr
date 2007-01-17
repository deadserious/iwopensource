program PageControllerDemo;

uses
  Forms,
  IWMain,
  ServerController in '..\..\ToolWindow\IW6\ServerController.pas' {IWServerController: TIWServerController},
  uMainForm in '..\uMainForm.pas' {formMain: TIWAppForm};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TformIWMain, formIWMain);
  Application.Run;
end.

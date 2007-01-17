unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, IWCompButton, Classes, Controls,
  IWControl, ArcIWPageController, IWCompLabel;

type
  TformMain = class(TIWAppForm)
    PageController: TArcIWPageController;
    lblText: TIWLabel;
    procedure IWButton1Click(Sender: TObject);
    procedure IWAppFormRender(Sender: TObject);
  public
  end;

implementation
{$R *.dfm}

uses
  ServerController;

procedure TformMain.IWButton1Click(Sender: TObject);
begin
  PageController.Maximize := True;
end;

procedure TformMain.IWAppFormRender(Sender: TObject);
begin
  lblText.Caption := 'This is a demo of the page controller.  You shouldn''t be '+
                     'able to right click or select text on this page.  Also, try '+
                     'pressing the button to maximize this browser page.  You could '+
                     'also try loading this page in a frame page.  It will immediately '+
                     'pop out.  This page should also be maximized. '+
                     'Note that some browsers (speifically Opera) limits what you can do'+
                     'with this type of Javascript and some features may not work.';
end;

end.

unit uMain;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, jpeg, Classes, Controls, IWControl,
  IWExtCtrls, ArcIWImageURL;

type
  TformMain = class(TIWAppForm)
    ArcIWImageURL1: TArcIWImageURL;
    ArcIWImageFileURL1: TArcIWImageFileURL;
  public
  end;

implementation
{$R *.dfm}

uses
  ServerController;

end.

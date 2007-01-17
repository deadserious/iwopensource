unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, IWHTMLControls, IWTreeview, IWGrids,
  IWCompText, IWCompMemo, IWCompListbox, IWCompLabel, jpeg, IWExtCtrls,
  IWCompEdit, IWCompCheckbox, Classes, Controls, IWControl, IWCompButton,
  ArcIWOperaGrid, ArcIWOperaMemo, ArcIWOperaListbox, ArcIWOperaEdit,
  ArcIWOperaComboBox, ArcIWOperaButton;

type
  TformMain = class(TIWAppForm)
    ArcIWOperaButton1: TArcIWOperaButton;
    ArcIWOperaEdit1: TArcIWOperaEdit;
    ArcIWOperaMemo1: TArcIWOperaMemo;
    ArcIWOperaListbox1: TArcIWOperaListbox;
    ArcIWOperaGrid1: TArcIWOperaGrid;
    ArcIWOperaComboBox1: TArcIWOperaComboBox;
    procedure ArcIWOperaButton1Click(Sender: TObject);
  public
  end;

implementation
{$R *.dfm}

uses
  IWServerControllerBase, ServerController;

procedure TformMain.ArcIWOperaButton1Click(Sender: TObject);
begin
  ArcIWOperaListbox1.Items.Insert(0,ArcIWOperaEdit1.Text);
  ArcIWOperaListbox1.ItemIndex := 0;
  ArcIWOperaComboBox1.Items.Add(ArcIWOperaEdit1.Text);
  ArcIWOperaMemo1.Lines.Insert(0,ArcIWOperaEdit1.Text);
  GServerController
end;

end.

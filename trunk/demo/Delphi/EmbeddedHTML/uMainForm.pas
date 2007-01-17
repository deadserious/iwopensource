unit uMainForm;
{PUBDIST}

interface

uses
  IWAppForm, IWApplication, IWTypes, Controls, Forms, IWContainer,
  IWRegion, Classes, IWControl, ArcIWEmbeddedHTML, IWCompButton,
  IWCompEdit, IWCompLabel;

type
  TformMain = class(TIWAppForm)
    IWRegion1: TIWRegion;
    embBrowser: TArcIWEmbeddedHTML;
    IWRegion2: TIWRegion;
    IWLabel1: TIWLabel;
    edtURL: TIWEdit;
    btnGo: TIWButton;
    btnBack: TIWButton;
    embBookmarks: TArcIWEmbeddedHTML;
    btnBookmark: TIWButton;
    procedure btnGoClick(Sender: TObject);
    procedure IWAppFormDefaultAction(Sender: TObject);
    procedure IWAppFormCreate(Sender: TObject);
    procedure IWAppFormDestroy(Sender: TObject);
    procedure btnBookmarkClick(Sender: TObject);
    procedure btnBackClick(Sender: TObject);
    procedure IWAppFormRender(Sender: TObject);
  public
    BookmarkList : TStringList;
    HistoryList  : TStringList;
    function GetBookmarkPage : string;
  end;

implementation
{$R *.dfm}

uses
  ServerController;

procedure TformMain.btnGoClick(Sender: TObject);
begin
  if pos('://',edtURL.Text)=0 then
    edtURL.Text := 'http://'+edtURL.Text;
  if embBrowser.SourceURL <> '' then
    HistoryList.Insert(0, embBrowser.SourceURL);
  embBrowser.SourceURL := edtURL.Text;
end;

procedure TformMain.IWAppFormDefaultAction(Sender: TObject);
begin
  btnGoClick(Sender);
end;

procedure TformMain.IWAppFormCreate(Sender: TObject);
begin
  BookmarkList := TStringList.Create;
  HistoryList  := TStringList.Create;
end;

procedure TformMain.IWAppFormDestroy(Sender: TObject);
begin
  BookmarkList.Free;
  HistoryList.Free;
end;

procedure TformMain.btnBookmarkClick(Sender: TObject);
begin
  BookmarkList.Insert(0,embBrowser.SourceURL);
end;

procedure TformMain.btnBackClick(Sender: TObject);
begin
  if HistoryList.Count > 0 then
  begin
    embBrowser.SourceURL := HistoryList[0];
    HistoryList.Delete(0);
  end;
end;

procedure TformMain.IWAppFormRender(Sender: TObject);
begin
  btnBack.Enabled := HistoryList.Count > 0;
  btnBookmark.Enabled := embBrowser.SourceURL = '';
  embBookmarks.Text := GetBookmarkPage;
end;

function TformMain.GetBookmarkPage: string;
begin
  Result := BookMarkList.Text;
end;

end.

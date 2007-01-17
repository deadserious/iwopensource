unit ArcIWEdit;

interface

uses
  Windows, Messages, SysUtils, Classes, Controls, IWControl, IWCompEdit, IWHTMLTag;

type
  TArcIWEdit = class(TIWEdit)
  private
  protected
    procedure Paint; override;
  public
    function RenderHTML: TIWHTMLTag; override;

  published
  end;

implementation

{ TArcIWEdit }

procedure TArcIWEdit.Paint;
begin
  inherited;
end;

function TArcIWEdit.RenderHTML: TIWHTMLTag;
var
  InheritedTag : TIWHTMLTag;
begin
  Result := TIWHTMLTag.CreateTag('DIV');
  Result.AddStringParam('ID',Name);
  InheritedTag := inherited RenderHTML;
  Result.Contents.AddTagAsObject(InheritedTag);
end;

end.

unit ArcIWOperaFix;

interface

{$I IWVersion.inc}

uses SysUtils, IWControl, IWGlobal, IWAppForm, IWHTMLTag;

{$IFDEF IWVERCLASS5}

procedure FixForOpera(Control : TIWControl);
procedure FixCSS(Control : TIWControl);
function RenderHTML4(Control : TIWControl; OrigText : string) : string;
function RenderHTML5(Control : TIWControl; OrigTag : TIWHTMLTag): TIWHTMLTag;

{$ENDIF}

implementation

{$IFDEF IWVERCLASS5}
var
  OperaIsFixed : boolean;

procedure FixForOpera(Control : TIWControl);
begin
  //if not OperaIsFixed then
  //begin
    Control.AddScriptFile('/js/IWExplorer.js_'+GVersion);
    OperaIsFixed := True;
  //end;
end;

procedure FixCSS(Control : TIWControl);
var
  sCSS : string;
begin
  sCSS := '<style type="text/css">'#13'.'+Control.HTMLName+'_DIV_CSS {position:absolute;left:'+IntToStr(Control.Left)+
      ';top:'+IntToStr(Control.Top)+';z-index:'+IntToStr(Control.zindex)+
      ';text-decoration:none;}'#13'</style>';
  TIWAppForm(Control.Owner).ExtraHeader.Add(sCSS);
end;

function RenderHTML4(Control : TIWControl; OrigText : string) : string;
var
  sOrig : string;
begin
  FixForOpera(Control);
  FixCSS(Control);
  sOrig := OrigText;
  sOrig := Copy(sOrig,1,Pos('>',sOrig)-1)+
           ' ID="'+Control.HTMLName+'" CLASS="'+Control.HTMLName+'CSS"'+
           Copy(sOrig,Pos('>',sOrig),length(sOrig));
  Result := '<DIV ID="'+Control.HTMLName+'_DIV_" CLASS="'+Control.HTMLName+'_DIV_CSS">'+sOrig+'</DIV>';
end;

function RenderHTML5(Control : TIWControl; OrigTag : TIWHTMLTag): TIWHTMLTag;
var
  InheritedTag : TIWHTMLTag;
begin
  FixForOpera(Control);
  FixCSS(Control);

  Result := TIWHTMLTag.CreateTag('DIV');
  Result.AddStringParam('ID',Control.HTMLName+'_DIV_');
  Result.AddStringParam('CLASS',Control.HTMLName+'_DIV_CSS');
  InheritedTag := OrigTag;
  InheritedTag.AddStringParam('ID',Control.HTMLName);
  InheritedTag.AddStringParam('CLASS',Control.HTMLName+'CSS');
  Result.Contents.AddTagAsObject(InheritedTag);
end;

{$ENDIF}

end.

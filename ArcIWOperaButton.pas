////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  unit ArcIWOperaButton                                                     //
//    Copyright 2002 by Arcana Technologies Incorporated                      //
//    Written By Jason Southwell                                              //
//                                                                            //
//  Description:                                                              //
//    This component provides an Opera friendly version of the TIWButton      //
//                                                                            //
//    This component is compatible with both IntraWeb versions 4 and 5.       //
//    To compile for the particular version you have installed, change        //
//    the compiler directive comment in IWVersion.inc.                        //
//                                                                            //
//    Information on IntraWeb can be found at www.atozedsoftware.com          //
//    Arcana Technologies Incorporated has no affilation with IntraWeb        //
//    or Atozed Software with the exception of being a satisfied customer.    //
//                                                                            //
//  Updates:                                                                  //
//    07/27/2002 - Released to TArcIWOperaButton to Open Source.              //
//    05/12/2003 - Removed support for IW4, Added support for IW6             //
//    10/02/2003 - Added support for IW7                                      //
//                                                                            //
//  License:                                                                  //
//    This code is covered by the Mozilla Public License 1.1 (MPL 1.1)        //
//    Full text of this license can be found at                               //
//    http://www.opensource.org/licenses/mozilla1.1.html                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

unit ArcIWOperaButton;

interface

{$I IWVersion.inc}

uses
  Windows, Messages, SysUtils, Classes, Controls, IWControl, IWCompButton, IWTypes,
  ArcIWOperaFix,
  {$IFDEF IWVERCLASS6} IWRenderContext, IWBaseControlInterface, IWScriptEvents, {$ENDIF}
  {$IFDEF IWVERSION70} IWRenderContext, {$ENDIF}
  IWHTMLTag;

type
  TArcIWOperaButton = class(TIWButton)
  private
  protected
  public
    {$IFDEF IWVERCLASS5}
    function RenderHTML: TIWHTMLTag; override;
    {$ELSE}
    {$IFDEF IWVERSION70}
    function RenderHTML(AContext: TIWBaseHTMLComponentContext): TIWHTMLTag; override;
    {$ELSE}
    function RenderHTML(AContext: TIWBaseComponentContext): TIWHTMLTag; override;
    {$ENDIF}
    {$ENDIF}
    constructor Create(AOwner: TComponent); override;
  published
  end;

implementation

uses IWAppForm;

{ TArcIWOperaButton }

constructor TArcIWOperaButton.Create(AOwner: TComponent);
var
  browsers : TIWBrowsers;
begin
  inherited;
  if (csDesigning in ComponentState) then
  begin
    if not (brOpera in  TIWAppForm(Owner).SupportedBrowsers) then
    begin
      browsers := TIWAppForm(Owner).SupportedBrowsers;
      Include(browsers,brOpera);
      TIWAppForm(Owner).SupportedBrowsers := browsers;
    end;
  end;
end;

{$IFDEF IWVERCLASS5}
function TArcIWOperaButton.RenderHTML: TIWHTMLTag;
begin
  if WebApplication.Browser = brOpera then
    Result := RenderHTML5(Self, inherited RenderHTML)
  else
    Result := inherited RenderHTML;
end;

{$ELSE}
{$IFDEF IWVERSION70}
function TArcIWOperaButton.RenderHTML(AContext: TIWBaseHTMLComponentContext): TIWHTMLTag;
{$ELSE}
function TArcIWOperaButton.RenderHTML(AContext: TIWBaseComponentContext): TIWHTMLTag;
{$ENDIF}
begin
    Result := inherited RenderHTML(AContext);
end;
{$ENDIF}

end.

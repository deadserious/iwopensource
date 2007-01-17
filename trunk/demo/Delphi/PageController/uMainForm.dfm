object formMain: TformMain
  Left = 0
  Top = 0
  Width = 349
  Height = 296
  Background.Fixed = False
  HandleTabs = False
  SupportedBrowsers = [brUnknown, brIE, brNetscape6, brOpera]
  OnRender = IWAppFormRender
  DesignLeft = 314
  DesignTop = 127
  object PageController: TArcIWPageController
    Left = 16
    Top = 176
    Width = 24
    Height = 24
    ZIndex = 0
    PopOut = True
    RightClickAllowed = False
    ScreenMinimum.Width = 1280
    ScreenMinimum.Height = 1024
    ScreenMinimum.Alert = 'Your screen resolution is smaller than 1280x1024'
    ScreenMaximum.Width = 640
    ScreenMaximum.Height = 480
    ScreenMaximum.Alert = 'Your screen resolution is greater than 640x480'
    TextSelectAllowed = False
    Maximize = True
  end
  object lblText: TIWLabel
    Left = 8
    Top = 8
    Width = 333
    Height = 121
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
    AutoSize = False
  end
end

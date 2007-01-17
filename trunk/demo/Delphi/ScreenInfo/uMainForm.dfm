object formMain: TformMain
  Left = 0
  Top = 0
  Width = 349
  Height = 296
  Background.Fixed = False
  HandleTabs = False
  SupportedBrowsers = [brUnknown, brIE, brNetscape6, brOpera]
  DesignLeft = 314
  DesignTop = 127
  object ScreenInfo: TArcIWScreenInfo
    Left = 44
    Top = 200
    Width = 24
    Height = 24
    ZIndex = 0
  end
  object IWButton1: TIWButton
    Left = 20
    Top = 12
    Width = 193
    Height = 25
    ZIndex = 0
    ButtonType = btButton
    Caption = 'Get Screen Info'
    Color = clBtnFace
    DoSubmitValidation = True
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
    ScriptEvents = <>
    TabOrder = 0
    OnClick = IWButton1Click
  end
  object IWLabel1: TIWLabel
    Left = 24
    Top = 48
    Width = 96
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'AvailHeight: '
  end
  object IWLabel2: TIWLabel
    Left = 24
    Top = 64
    Width = 85
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'AvailWidth:'
  end
  object IWLabel3: TIWLabel
    Left = 24
    Top = 96
    Width = 70
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'AvailLeft:'
  end
  object IWLabel4: TIWLabel
    Left = 24
    Top = 80
    Width = 73
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'AvailTop:'
  end
  object IWLabel5: TIWLabel
    Left = 24
    Top = 160
    Width = 35
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'Top:'
  end
  object IWLabel6: TIWLabel
    Left = 24
    Top = 144
    Width = 86
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'PixelDepth:'
  end
  object IWLabel7: TIWLabel
    Left = 24
    Top = 128
    Width = 53
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'Height:'
  end
  object IWLabel8: TIWLabel
    Left = 24
    Top = 112
    Width = 90
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'ColorDepth:'
  end
  object IWLabel9: TIWLabel
    Left = 24
    Top = 176
    Width = 47
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'Width:'
  end
  object lblAvailHeight: TIWLabel
    Left = 120
    Top = 48
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblAvailWidth: TIWLabel
    Left = 120
    Top = 64
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblAvailLeft: TIWLabel
    Left = 120
    Top = 96
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblAvailTop: TIWLabel
    Left = 120
    Top = 80
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblTop: TIWLabel
    Left = 120
    Top = 160
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblPixelDepth: TIWLabel
    Left = 120
    Top = 144
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblHeight: TIWLabel
    Left = 120
    Top = 128
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblColorDepth: TIWLabel
    Left = 120
    Top = 112
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
  object lblWidth: TIWLabel
    Left = 120
    Top = 176
    Width = 0
    Height = 0
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
  end
end

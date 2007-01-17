object formMain: TformMain
  Left = 0
  Top = 0
  Width = 410
  Height = 388
  Background.Fixed = False
  HandleTabs = False
  SupportedBrowsers = [brIE, brNetscape6]
  DesignLeft = 314
  DesignTop = 127
  object IWLabel1: TIWLabel
    Left = 72
    Top = 168
    Width = 162
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = [fsBold]
    Caption = 'This is the main page'
  end
  object IWLabel2: TIWLabel
    Left = 84
    Top = 188
    Width = 100
    Height = 16
    ZIndex = 0
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
    Caption = 'Some Edit Box:'
  end
  object IWEdit1: TIWEdit
    Left = 180
    Top = 188
    Width = 121
    Height = 21
    ZIndex = 0
    BGColor = clNone
    DoSubmitValidation = True
    Editable = True
    Font.Color = clNone
    Font.Enabled = True
    Font.Size = 10
    Font.Style = []
    FriendlyName = 'IWEdit1'
    MaxLength = 0
    ReadOnly = False
    Required = False
    ScriptEvents = <>
    TabOrder = 0
    PasswordPrompt = False
    Text = 'IWEdit1'
  end
  object ArcIWToolWindow1: TArcIWToolWindow
    Left = 192
    Top = 204
    Width = 137
    Height = 137
    ZIndex = 100
    Text = 
      'This is the text that will be in the tool window.  It may be som' +
      'e hint as to how to manuver the website, or maybe an advert that' +
      ' the user can close at will.'
    BorderColor = clBlue
    BackgroundColor = clWhite
  end
end

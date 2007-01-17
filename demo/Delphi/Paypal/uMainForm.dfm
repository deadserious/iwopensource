object formMain: TformMain
  Left = 0
  Top = 0
  Width = 800
  Height = 751
  Background.Fixed = False
  HandleTabs = False
  SupportedBrowsers = [brUnknown, brIE, brNetscape6, brOpera]
  OnRender = IWAppFormRender
  DesignLeft = 193
  DesignTop = 94
  object embPayPal: TArcIWEmbeddedHTML
    Left = 0
    Top = 337
    Width = 800
    Height = 414
    Align = alClient
    ZIndex = 0
    MarginWidth = 0
    MarginHeight = 0
  end
  object IWRegion1: TIWRegion
    Left = 0
    Top = 0
    Width = 800
    Height = 337
    Align = alTop
    TabOrder = 0
    Color = clNone
    object IWRectangle1: TIWRectangle
      Left = 4
      Top = 4
      Width = 789
      Height = 53
      ZIndex = 0
      Text = 'IWRectangle1'
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Color = clBlack
      Alignment = taLeftJustify
      VAlign = vaMiddle
    end
    object IWLabel4: TIWLabel
      Left = 12
      Top = 12
      Width = 773
      Height = 37
      ZIndex = 0
      Font.Color = clRed
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      AutoSize = False
      Caption = 
        'WARNING:  Using any of the buttons below may actually result in ' +
        'transfering money from your paypal account or credit card to Arc' +
        'ana Technologies.  Do not try these demos through to completion ' +
        'unless you really wish to do so.  No refunds will be offered.'
    end
    object IWLabel1: TIWLabel
      Left = 168
      Top = 68
      Width = 509
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 
        'Click here to donate $10.00 to Arcana Technologies for this Open' +
        ' Source effort.'
    end
    object IWLabel2: TIWLabel
      Left = 168
      Top = 104
      Width = 480
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 
        'Click here to subscribe to Arcana'#39's DoNothing Service for only $' +
        '1 a month.'
    end
    object IWLabel3: TIWLabel
      Left = 168
      Top = 180
      Width = 375
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 'Click here to purchase a single imaginary widget for $5.00.'
    end
    object IWLabel5: TIWLabel
      Left = 168
      Top = 232
      Width = 368
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 'Click here to add an imaginary widget ($5.00) to your cart.'
    end
    object IWLabel6: TIWLabel
      Left = 168
      Top = 264
      Width = 368
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 'Click here to add an imaginary widget ($2.00) to your cart.'
    end
    object ArcIWPayPalDonation1: TArcIWPayPalDonation
      Left = 8
      Top = 64
      Width = 110
      Height = 23
      ZIndex = 0
      PaypalAccount = 'jsouthwell@arcanatech.com'
      AutoSize = True
      UseBorder = False
      DonationID = 'ID#123'
      DonationText = 'Open Source Efforts'
      DonationAmount = 10
      DefaultImage = dfdRounded
    end
    object ArcIWPayPalSubscription1: TArcIWPayPalSubscription
      Left = 8
      Top = 96
      Width = 62
      Height = 31
      ZIndex = 0
      PaypalAccount = 'jsouthwell@arcanatech.com'
      AutoSize = True
      UseBorder = False
      SubscriptionID = 'ID#4423'
      SubscriptionText = 'Do Nothing Service'
      PeriodTrial1.Amount = 1
      PeriodTrial1.CycleLength = 2
      PeriodTrial1.CycleFreq = pfMonths
      PeriodTrial2.CycleLength = 0
      PeriodTrial2.CycleFreq = pfDays
      PeriodRegular.Amount = 1
      PeriodRegular.CycleLength = 1
      PeriodRegular.CycleFreq = pfMonths
      Recurring = True
      StopRecurring = 24
      ReattemptOnFailure = True
      DefaultImage = dfsPaypal1
      PasswordManagement = False
    end
    object ArcIWPayPalItemPurchase1: TArcIWPayPalItemPurchase
      Left = 8
      Top = 168
      Width = 150
      Height = 52
      ZIndex = 0
      PaypalAccount = 'jsouthwell@arcanatech.com'
      AutoSize = True
      UseBorder = False
      ItemID = 'ID#5543'
      ItemText = 'Imaginary Widget'
      ItemAmount = 5
      DefaultImage = dfiPaypalBig1
      AskForQuantity = False
    end
    object ArcIWPayPalAddToCart1: TArcIWPayPalAddToCart
      Left = 8
      Top = 230
      Width = 90
      Height = 23
      ZIndex = 0
      PaypalAccount = 'jsouthwell@arcanatech.com'
      AutoSize = True
      UseBorder = False
      ItemID = 'ID#9092'
      ItemText = 'Large Widget'
      ItemAmount = 5
      DefaultImage = dfacStandard
    end
    object ArcIWPayPalAddToCart2: TArcIWPayPalAddToCart
      Left = 8
      Top = 262
      Width = 106
      Height = 24
      ZIndex = 0
      AutoSize = True
      UseBorder = False
      ItemID = 'ID#09090'
      ItemText = 'Small Widget'
      ItemAmount = 2
      DefaultImage = dfacAddImage
    end
    object ArcIWPayPalViewCart2: TArcIWPayPalViewCart
      Left = 8
      Top = 296
      Width = 130
      Height = 32
      ZIndex = 0
      PaypalAccount = 'jsouthwell@arcanatech.com'
      AutoSize = True
      UseBorder = False
      DefaultImage = dfvcViewImage
    end
    object ArcIWPayPalSubscriptionCancel1: TArcIWPayPalSubscriptionCancel
      Left = 8
      Top = 136
      Width = 139
      Height = 21
      ZIndex = 0
      AutoSize = True
      UseBorder = False
      DefaultImage = dfscRounded1
    end
    object IWLabel7: TIWLabel
      Left = 168
      Top = 136
      Width = 272
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 'Click here to cancel a current subscription.'
    end
    object IWLabel8: TIWLabel
      Left = 168
      Top = 304
      Width = 176
      Height = 16
      ZIndex = 0
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      Caption = 'Click here to view your cart.'
    end
    object chkNewWindow: TIWCheckBox
      Left = 632
      Top = 312
      Width = 161
      Height = 21
      ZIndex = 0
      Caption = 'Use Seperate Window'
      Editable = True
      Font.Color = clNone
      Font.Enabled = True
      Font.Size = 10
      Font.Style = []
      ScriptEvents = <>
      DoSubmitValidation = True
      OnClick = chkNewWindowClick
      Style = stNormal
      TabOrder = 1
      Checked = False
    end
  end
end

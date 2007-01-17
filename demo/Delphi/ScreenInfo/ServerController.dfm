object IWServerController: TIWServerController
  OldCreateOrder = False
  AppName = 'MyIWApp'
  ComInitialization = ciNone
  SessionTrackingMethod = tmURL
  Description = 'My Intraweb Application'
  DestinationDevice = ddWeb
  ExceptionDisplayMode = smAlert
  ExecCmd = 'EXEC'
  HistoryEnabled = False
  Port = 80
  RestrictIPs = False
  ShowResyncWarning = True
  SessionTimeout = 10
  SSLPort = 0
  SupportedBrowsers = [brUnknown, brIE, brNetscape6, brOpera]
  OnNewSession = IWServerControllerBaseNewSession
  Left = 487
  Top = 202
  Height = 310
  Width = 342
end

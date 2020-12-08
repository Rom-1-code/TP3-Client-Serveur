object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 520
    Top = 47
    Width = 97
    Height = 13
    Caption = 'La lampe est allumer'
    Color = clGreen
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 520
    Top = 66
    Width = 97
    Height = 13
    Caption = 'La lampe est eteinte'
    Color = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 32
    Top = 16
    Width = 75
    Height = 25
    Caption = 'Allumer'
    TabOrder = 0
    OnClick = Button1Click
  end
  object LinkLabel1: TLinkLabel
    Left = 544
    Top = 24
    Width = 53
    Height = 17
    Caption = 'LinkLabel1'
    TabOrder = 1
  end
  object colorbar: TTrackBar
    Left = 120
    Top = 96
    Width = 337
    Height = 45
    Max = 255
    Position = 150
    TabOrder = 2
    OnChange = colorbarChange
  end
  object Button2: TButton
    Left = 32
    Top = 60
    Width = 75
    Height = 25
    Caption = 'Eteindre'
    TabOrder = 3
    OnClick = Button2Click
  end
  object colorbar2: TTrackBar
    Left = 120
    Top = 147
    Width = 337
    Height = 45
    Max = 255
    Position = 150
    TabOrder = 4
    OnChange = colorbar2Change
  end
  object colorbar3: TTrackBar
    Left = 120
    Top = 198
    Width = 337
    Height = 45
    Max = 255
    Position = 150
    TabOrder = 5
    OnChange = colorbar3Change
  end
  object colorbar4: TTrackBar
    Left = 120
    Top = 249
    Width = 337
    Height = 45
    Max = 255
    Position = 150
    TabOrder = 6
    OnChange = colorbar4Change
  end
  object TrackBar1: TTrackBar
    Left = 176
    Top = 40
    Width = 230
    Height = 45
    TabOrder = 7
    OnChange = TrackBar1Change
  end
end

object Form1: TForm1
  Left = 192
  Top = 124
  Width = 891
  Height = 582
  Cursor = crHandPoint
  Caption = 'Tic-Tac-Toe v1.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pole1: TImage
    Left = 48
    Top = 56
    Width = 100
    Height = 100
    OnClick = pole1Click
  end
  object pole3: TImage
    Left = 240
    Top = 56
    Width = 100
    Height = 100
    OnClick = pole3Click
  end
  object pole2: TImage
    Left = 144
    Top = 56
    Width = 100
    Height = 100
    OnClick = pole2Click
  end
  object pole4: TImage
    Left = 48
    Top = 152
    Width = 100
    Height = 100
    OnClick = pole4Click
  end
  object pole5: TImage
    Left = 144
    Top = 152
    Width = 100
    Height = 100
    OnClick = pole5Click
  end
  object pole6: TImage
    Left = 240
    Top = 152
    Width = 100
    Height = 100
    OnClick = pole6Click
  end
  object pole7: TImage
    Left = 48
    Top = 248
    Width = 100
    Height = 100
    OnClick = pole7Click
  end
  object pole8: TImage
    Left = 144
    Top = 248
    Width = 100
    Height = 100
    OnClick = pole8Click
  end
  object pole9: TImage
    Left = 240
    Top = 248
    Width = 100
    Height = 100
    AutoSize = True
    OnClick = pole9Click
  end
  object tura: TImage
    Left = 624
    Top = 176
    Width = 30
    Height = 30
  end
  object Label1: TLabel
    Left = 488
    Top = 176
    Width = 100
    Height = 24
    Caption = 'Tura gracza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 504
    Top = 256
    Width = 177
    Height = 89
    Caption = 'Od Nowa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end

object Form1: TForm1
  Left = 222
  Top = 194
  Width = 1305
  Height = 675
  Caption = 'Notatnik'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Tresc: TMemo
    Left = 0
    Top = 0
    Width = 1289
    Height = 617
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnKeyDown = TrescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 1176
    Top = 24
    object pl1: TMenuItem
      Caption = '&plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy'
        OnClick = Nowy1Click
      end
      object Otwrz1: TMenuItem
        Caption = 'Otw'#243'rz '
        OnClick = Otwrz1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapisz ctrl + S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object zakocz1: TMenuItem
        Caption = 'Zako'#324'cz '
      end
    end
    object Edycja1: TMenuItem
      Caption = 'Edycja'
      object WytnijCTRX1: TMenuItem
        Caption = 'Wytnij CTR + X'
      end
      object KopiujCTRLC1: TMenuItem
        Caption = 'Kopiuj CTRL +C'
      end
      object WklejCTRLV1: TMenuItem
        Caption = 'Wklej CTRL + V'
      end
    end
    object Format1: TMenuItem
      Caption = 'Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Zawijanie wierszy'
      end
      object Czcionka1: TMenuItem
        Caption = 'Czcionka'
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object informacje1: TMenuItem
        Caption = 'informacje'
        object oprogramie1: TMenuItem
          Caption = 'o programie'
        end
        object stronainternetwowa1: TMenuItem
          Caption = 'strona internetwowa'
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe (txt)|*txt|Wszystkie Pliki|*.*'
    Left = 1208
    Top = 24
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Wszystkie pliki|*.*|.txt|*.txt'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 1176
    Top = 56
  end
end

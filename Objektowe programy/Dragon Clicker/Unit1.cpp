//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

 long long int coins=0 ;
int ilosc_giermkow=0;
int ilosc_rycerzy=0;
int ilosc_zs=0;
bool as=false;






//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmokClick(TObject *Sender)
{
if (as==false)
{
coins++;
}
if(as==true)
{
coins=coins +100000;
}
             Label1->Caption= "Coins : "+ IntToStr(coins);
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
if (coins>=10)
{
ilosc_giermkow++;
 coins=coins-10;
    TGiermek->Enabled=true;
     Label1->Caption= "Coins : "+ IntToStr(coins);
     ile_giermkow->Caption="Ilosc Giermkow = " + IntToStr(ilosc_giermkow);
     ile_giermkow->Visible = true;

     switch (ilosc_giermkow)
     {
        case 1:
        {
         giermek1->Visible=true;
         break;
        }
         case 2:
        {
         giermek2->Visible=true;
         break;
        }
         case 3:
        {
         giermek3->Visible=true;
         break;
        }
         case 4:
        {
         giermek4->Visible=true;
         break;
        }
         case 5:
        {
         giermek5->Visible=true;
         break;
        }
         case 6:
        {
         giermek6->Visible=true;
         break;
        }
         case 7:
        {
         giermek7->Visible=true;
         break;
        }
         case 8:
        {
         giermek8->Visible=true;
         break;
        }


     }
}
}
//---------------------------------------------------------------------------
   void __fastcall TForm1::TGiermekTimer(TObject *Sender)
{


coins=coins+10*ilosc_giermkow;
 Label1->Caption= "Coins : "+ IntToStr(coins);
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    if (coins>=1000)
{
ilosc_rycerzy++;
 coins=coins-1000;
    TRycerz->Enabled=true;
     Label1->Caption= "Coins : "+ IntToStr(coins);
     ile_rycerzy->Caption="Ilosc Rycerzy = " + IntToStr(ilosc_rycerzy);
     ile_rycerzy->Visible = true;
     }
      switch (ilosc_rycerzy)
     {
        case 1:
        {
         warrior1->Visible=true;
         break;
        }
        case 2:
        {
         warrior2->Visible=true;
         break;
        }
        case 3:
        {
         warrior3->Visible=true;
         break;
        }
        case 4:
        {
         warrior4->Visible=true;
         break;
        }
        case 5:
        {
         warrior5->Visible=true;
         break;
        }
         }
           }



//---------------------------------------------------------------------------

void __fastcall TForm1::TRycerzTimer(TObject *Sender)
{
coins=coins+1000*ilosc_rycerzy;
 Label1->Caption= "Coins : "+ IntToStr(coins);
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button2Click(TObject *Sender)
{
            if (coins>=1000000)
{
ilosc_zs++;
 coins=coins-1000000;
    Tzs->Enabled=true;
     Label1->Caption= "Coins : "+ IntToStr(coins);
     ile_zs->Caption="Ilosc Zabójców Smoków = " + IntToStr(ilosc_zs);
     ile_zs->Visible = true;

     switch (ilosc_zs)
     {
        case 1:
        {
         ds1->Visible=true;
         break;
        }
         case 2:
        {
         ds2->Visible=true;
         break;
        }
         case 3:
        {
         ds3->Visible=true;
         break;
        }
         case 4:
        {
         ds4->Visible=true;
         break;
        }
         case 5:
        {
         ds5->Visible=true;
         break;
        }




     }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TzsTimer(TObject *Sender)
{
                  coins=coins+1000000*ilosc_zs;
 Label1->Caption= "Coins : "+ IntToStr(coins);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{

if (coins>1000000)
{coins=0;
ilosc_rycerzy=0;
ile_rycerzy->Caption="Ilosc Rycerzy = " + IntToStr(ilosc_rycerzy);
ilosc_giermkow=0;
ile_giermkow->Caption="Ilosc Giermkow = " + IntToStr(ilosc_giermkow);
ilosc_zs=0;
ile_zs->Caption="Ilosc Zabójców Smoków = " + IntToStr(ilosc_zs);

as=true;

}
}
//---------------------------------------------------------------------------



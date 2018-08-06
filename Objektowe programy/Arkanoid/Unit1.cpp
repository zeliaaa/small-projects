//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 int x=-8;
 int y=-8;
 int do_wygranej=23;


 bool kolizja (TImage * pilka , TImage * cegla)

 {
     if( pilka->Left >= cegla->Left-pilka->Width && pilka->Left <= cegla->Left+cegla->Width &&
       pilka->Top >= cegla->Top-pilka->Height && pilka->Top <= cegla->Top+cegla->Height)
      return true;
      else return false;
 }


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_pilkaTimer(TObject *Sender)
{
ball->Left+=x;
ball->Top+=y;

if (ball->Left-5 <= tlo->Left) x=-x;
if (ball->Top-5 <= tlo->Top) y=-y;
if (ball->Left+ball->Width+5 >= tlo->Width) x=-x;
if (ball->Top >=  paletka->Top+paletka->Height+15)
        {
         Timer_pilka->Enabled=false;
         ball->Visible=false;
         Button1->Caption="Przegrana! Jeszcze raz?";
         Button1->Visible=true;

        }
        if ( do_wygranej==0)
        {
        Timer_pilka->Enabled=false;
        ball->Visible=false;
        Button1->Visible=true;


        }

        else if(ball->Left > paletka->Left-ball->Width/2 && ball->Left < paletka->Left+paletka->Width &&
       ball->Top+ball->Height > paletka->Top)
       {
               if (y>0) y=-y;
       }

         if (kolizja(ball,Image1) && Image1->Visible==true)
         {
          x=-x;
          y=-y;
          Image1->Visible=false;
          do_wygranej--;
         }

                 if (kolizja(ball,Image2) && Image2->Visible==true)
         {
          x=-x;
          y=-y;
          Image2->Visible=false;
          do_wygranej--;
         }

                 if (kolizja(ball,Image3) && Image3->Visible==true)
         {
          x=-x;
          y=-y;
          Image3->Visible=false;
          do_wygranej--;
         }




                if (kolizja(ball,Image4) && Image4->Visible==true)
         {
          x=-x;
          y=-y;
          Image4->Visible=false;
          do_wygranej--;
         }


                    if (kolizja(ball,Image5) && Image5->Visible==true)
         {
          x=-x;
          y=-y;
          Image5->Visible=false;
          do_wygranej--;
         }


                        if (kolizja(ball,Image6) && Image6->Visible==true)
         {
          x=-x;
          y=-y;
          Image6->Visible=false;
          do_wygranej--;
         }

                           if (kolizja(ball,Image7) && Image7->Visible==true)
         {
          x=-x;
          y=-y;
          Image7->Visible=false;
          do_wygranej--;
         }


                       if (kolizja(ball,Image8) && Image8->Visible==true)
         {
          x=-x;
          y=-y;
          Image8->Visible=false;
          do_wygranej--;
         }




                          if (kolizja(ball,Image9) && Image9->Visible==true)
         {
          x=-x;
          y=-y;
          Image9->Visible=false;
          do_wygranej--;
         }

                     if (kolizja(ball,Image10) && Image10->Visible==true)
         {
          x=-x;
          y=-y;
          Image10->Visible=false;
          do_wygranej--;
         }





                     if (kolizja(ball,Image11) && Image11->Visible==true)
         {
          x=-x;
          y=-y;
          Image11->Visible=false;
          do_wygranej--;
         }






                     if (kolizja(ball,Image12) && Image12->Visible==true)
         {
          x=-x;
          y=-y;
          Image12->Visible=false;
          do_wygranej--;
         }







                     if (kolizja(ball,Image13) && Image13->Visible==true)
         {
          x=-x;
          y=-y;
          Image13->Visible=false;
          do_wygranej--;
         }





                     if (kolizja(ball,Image14) && Image14->Visible==true)
         {
          x=-x;
          y=-y;
          Image14->Visible=false;
          do_wygranej--;
         }






                         if (kolizja(ball,Image15) && Image15->Visible==true)
         {
          x=-x;
          y=-y;
          Image15->Visible=false;
          do_wygranej--;
         }





                          if (kolizja(ball,Image16) && Image16->Visible==true)
         {
          x=-x;
          y=-y;
          Image16->Visible=false;
          do_wygranej--;
         }









                        if (kolizja(ball,Image17) && Image17->Visible==true)
         {
          x=-x;
          y=-y;
          Image17->Visible=false;
          do_wygranej--;
         }







                         if (kolizja(ball,Image18) && Image18->Visible==true)
         {
          x=-x;
          y=-y;
          Image18->Visible=false;
          do_wygranej--;
         }









                           if (kolizja(ball,Image19) && Image19->Visible==true)
         {
          x=-x;
          y=-y;
          Image19->Visible=false;
          do_wygranej--;
         }










                           if (kolizja(ball,Image20) && Image20->Visible==true)
         {
          x=-x;
          y=-y;
          Image20->Visible=false;
          do_wygranej--;
         }











                       if (kolizja(ball,Image21) && Image21->Visible==true)
         {
          x=-x;
          y=-y;
          Image21->Visible=false;
          do_wygranej--;
         }









                     if (kolizja(ball,Image22) && Image22->Visible==true)
         {
          x=-x;
          y=-y;
          Image22->Visible=false;
          do_wygranej--;
         }






                     if (kolizja(ball,Image23) && Image23->Visible==true)
         {
          x=-x;
          y=-y;
          Image23->Visible=false;
          do_wygranej--;
         }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::leftaTimer(TObject *Sender)
{
if (paletka->Left>10)
paletka->Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rightaTimer(TObject *Sender)
{
if( paletka -> Left + paletka -> Width <= tlo->Width-10)
paletka->Left+=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_LEFT) lefta->Enabled=true;
if (Key==VK_RIGHT) righta->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_LEFT) lefta->Enabled=false;
if (Key==VK_RIGHT) righta->Enabled=false;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
ball->Left=50;
ball->Top=50;

ball->Visible=true;

x=-8;
y=-8;
Timer_pilka->Enabled=true;
Button1->Visible=false;
do_wygranej=23;


Image1->Visible=true;

Image2->Visible=true;

Image3->Visible=true;

Image4->Visible=true;

Image5->Visible=true;

Image6->Visible=true;

Image7->Visible=true;

Image8->Visible=true;

Image9->Visible=true;

Image10->Visible=true;

Image11->Visible=true;

Image12->Visible=true;

Image13->Visible=true;

Image14->Visible=true;

Image15->Visible=true;

Image16->Visible=true;

Image17->Visible=true;

Image18->Visible=true;

Image19->Visible=true;

Image20->Visible=true;

Image21->Visible=true;

Image22->Visible=true;

Image23->Visible=true;



}
//---------------------------------------------------------------------------

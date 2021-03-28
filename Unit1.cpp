//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int liczby[100];
bool gra_rozpoczeta = false;
int ile=0;
int licznik=0;

void sekwencja()
{
        Application->ProcessMessages(); ::Sleep(1000);

    Form1->b1->Picture->LoadFromFile("img/p1.bmp");
    Form1->b2->Picture->LoadFromFile("img/p2.bmp");
    Form1->b3->Picture->LoadFromFile("img/p3.bmp");
    Form1->b4->Picture->LoadFromFile("img/p4.bmp");
    Form1->b5->Picture->LoadFromFile("img/p5.bmp");

  Form1->b1->Enabled = false;
  Form1->b2->Enabled = false;
  Form1->b3->Enabled = false;
  Form1->b4->Enabled = false;
  Form1->b5->Enabled = false;

  Form1->Label1->Caption = "Nastêpna runda za: 2";
  Application->ProcessMessages(); ::Sleep(1000);
  Form1->Label1->Caption = "Nastêpna runda za: 1";
  Application->ProcessMessages(); ::Sleep(1000);

  Form1->Label1->Caption ="Zapamiêtaj sekwencjê";
  Application->ProcessMessages(); ::Sleep(1000);

  ile++;
  for (int i=0; i<ile; i++)
  {
        switch(liczby[i])
        {
                case 1:
                {
                sndPlaySound("snd/d1.wav",SND_ASYNC);
                Form1->b1z->Visible = true;
                } break;

                case 2:
                {
                sndPlaySound("snd/d2.wav",SND_ASYNC);
                Form1->b2z->Visible = true;
                } break;

                case 3:
                {
                sndPlaySound("snd/d3.wav",SND_ASYNC);
                Form1->b3z->Visible = true;
                } break;

                case 4:
                {
                sndPlaySound("snd/d4.wav",SND_ASYNC);
                Form1->b4z->Visible = true;
                } break;

                case 5:
                {
                sndPlaySound("snd/d5.wav",SND_ASYNC);
                Form1->b5z->Visible = true;
                } break;
        }//switch
        Application->ProcessMessages(); ::Sleep(1200);
        Form1->b1z->Visible = false;
        Form1->b2z->Visible = false;
        Form1->b3z->Visible = false;
        Form1->b4z->Visible = false;
        Form1->b5z->Visible = false;
        Application->ProcessMessages(); ::Sleep(100);
  }//for

  Form1->b1->Enabled = true;
  Form1->b2->Enabled = true;
  Form1->b3->Enabled = true;
  Form1->b4->Enabled = true;
  Form1->b5->Enabled = true;
  Form1->Label1->Caption = "Powtórz sekwencjê";
  licznik=0;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
     randomize();
     for(int i=0; i<100; i++)

     {
        liczby[i] = random(5)+1;
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label1Click(TObject *Sender)
{
        if(gra_rozpoczeta == false)
        {
                StaticText1->Caption = "Twój wynik: 0";
                gra_rozpoczeta = true;
                sndPlaySound("snd/start.wav",SND_ASYNC);
                sekwencja();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b1Click(TObject *Sender)
{
        if(gra_rozpoczeta == true)
        {
                licznik++;
                if(liczby[licznik-1]!=1)
                {
                        ile--;
                        Label1->Caption = "Zagraj jeszcze raz!";
                        StaticText1->Caption = "Skucha! Twój wynik: "+IntToStr(ile);
                        sndPlaySound("snd/koniec.wav",SND_ASYNC);
                        gra_rozpoczeta = false;
                        ile=0;
                
                }
                if(licznik == ile)
                {
                Label1->Caption = "Doskonale!";
                StaticText1->Caption = "Twój wynik: "+IntToStr(ile);
                sekwencja();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b2Click(TObject *Sender)
{
         if(gra_rozpoczeta == true)
        {
                licznik++;
                if(liczby[licznik-1]!=2)
                {
                        ile--;
                        Label1->Caption = "Zagraj jeszcze raz!";
                        StaticText1->Caption = "Skucha! Twój wynik: "+IntToStr(ile);
                        sndPlaySound("snd/koniec.wav",SND_ASYNC);
                        gra_rozpoczeta = false;
                        ile=0;
                }
                if(licznik == ile)
                {
                Label1->Caption = "Doskonale!";
                StaticText1->Caption = "Twój wynik: "+IntToStr(ile);
                sekwencja();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b3Click(TObject *Sender)
{
 if(gra_rozpoczeta == true)
        {
                licznik++;
                if(liczby[licznik-1]!=3)
                {
                        ile--;
                        Label1->Caption = "Zagraj jeszcze raz!";
                        StaticText1->Caption = "Skucha! Twój wynik: "+IntToStr(ile);
                        sndPlaySound("snd/koniec.wav",SND_ASYNC);
                        gra_rozpoczeta = false;
                        ile=0;
                }
                if(licznik == ile)
                {
                Label1->Caption = "Doskonale!";
                StaticText1->Caption = "Twój wynik: "+IntToStr(ile);
                sekwencja();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b4Click(TObject *Sender)
{
 if(gra_rozpoczeta == true)
        {
                licznik++;
                if(liczby[licznik-1]!=4)
                {
                        ile--;
                        Label1->Caption = "Zagraj jeszcze raz!";
                        StaticText1->Caption = "Skucha! Twój wynik: "+IntToStr(ile);
                        sndPlaySound("snd/koniec.wav",SND_ASYNC);
                        gra_rozpoczeta = false;
                        ile=0;
                }
                if(licznik == ile)
                {
                Label1->Caption = "Doskonale!";
                StaticText1->Caption = "Twój wynik: "+IntToStr(ile);
                sekwencja();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b5Click(TObject *Sender)
{
 if(gra_rozpoczeta == true)
        {
                licznik++;
                if(liczby[licznik-1]!=5)
                {
                        ile--;
                        Label1->Caption = "Zagraj jeszcze raz!";
                        StaticText1->Caption = "Skucha! Twój wynik: "+IntToStr(ile);
                        sndPlaySound("snd/koniec.wav",SND_ASYNC);
                        gra_rozpoczeta = false;
                        ile=0;
                }
                if(licznik == ile)
                {
                Label1->Caption = "Doskonale!";
                StaticText1->Caption = "Twój wynik: "+IntToStr(ile);
                sekwencja();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      b1->Picture->LoadFromFile("img/p1a.bmp");
      sndPlaySound("snd/d1.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
       b1->Picture->LoadFromFile("img/p1.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
       b2->Picture->LoadFromFile("img/p2a.bmp");
      sndPlaySound("snd/d2.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
       b2->Picture->LoadFromFile("img/p2.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b3MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
       b3->Picture->LoadFromFile("img/p3a.bmp");
      sndPlaySound("snd/d3.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b3MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        b3->Picture->LoadFromFile("img/p3.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b4MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      b4->Picture->LoadFromFile("img/p4a.bmp");
      sndPlaySound("snd/d4.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b4MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      b4->Picture->LoadFromFile("img/p4.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b5MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        b5->Picture->LoadFromFile("img/p5a.bmp");
      sndPlaySound("snd/d5.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b5MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
       b5->Picture->LoadFromFile("img/p5.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChatServerExecute(TIdPeerThread *AThread)
{
        int bytes = AThread->Connection->ReadInteger();
        AnsiString request = AThread->Connection->ReadString(bytes);
        AThread->Connection->Disconnect();
        Okno->Items->Add(request);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WyslijClick(TObject *Sender)
{
        ChatClient->Host = EHost->Text;
        ChatClient->Connect();


        ChatClient->WriteInteger(Wiadomosc->Text.Length());
        ChatClient->Write(Wiadomosc->Text);
        
        
        ChatClient->Disconnect();
}
//---------------------------------------------------------------------------


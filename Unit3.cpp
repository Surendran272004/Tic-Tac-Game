//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;
char CurrentSymbol ='X';
bool TForm3:: CheckWinner(){
	if(!Button1->Text.IsEmpty() && Button1->Text == Button2->Text && Button1->Text == Button3->Text)
		return true;
	if(!Button4->Text.IsEmpty() &&Button4->Text == Button5->Text && Button4->Text == Button6->Text)
		return true;
	if(!Button7->Text.IsEmpty() &&Button7->Text == Button8->Text && Button7->Text == Button9->Text)
		return true;
	if(!Button1->Text.IsEmpty() && Button1->Text == Button4->Text && Button1->Text == Button7->Text)
		return true;
	if(!Button2->Text.IsEmpty() && Button2->Text == Button5->Text && Button2->Text == Button8->Text)
		return true;
	if(!Button3->Text.IsEmpty() && Button3->Text == Button6->Text && Button3->Text == Button9->Text)
		return true;
	if(!Button1->Text.IsEmpty() && Button1->Text == Button5->Text && Button1->Text == Button9->Text)
		return true;
	if(!Button3->Text.IsEmpty() && Button3->Text == Button5->Text && Button3->Text == Button7->Text)
		return true;
	return false;

}
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	Button1->Text=CurrentSymbol;
	if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
	if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
    Label2->Text = CurrentSymbol;

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
	Button2->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}

    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
	Button3->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}

	if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	Button4->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}

    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button5Click(TObject *Sender)
{
	Button5->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button6Click(TObject *Sender)
{
	Button6->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button7Click(TObject *Sender)
{
	Button7->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button8Click(TObject *Sender)
{
	Button8->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
    if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
	Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button9Click(TObject *Sender)
{
	Button9->Text=CurrentSymbol;
    if(CheckWinner()){
		Label3->Text= "WINNER!!!";
		return ;
	}
	if(CurrentSymbol=='X'){
		CurrentSymbol='O';
	}
	else{
		CurrentSymbol='X';
	}
    Label2->Text = CurrentSymbol;
}
//---------------------------------------------------------------------------

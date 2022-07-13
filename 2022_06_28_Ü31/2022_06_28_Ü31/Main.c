//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_28_Ü31	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/28/2022 7:34:21 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
void Umlaute(unsigned char* string)
{
	while (*string != "\0")
	{
		switch (*string)
		{
		case 0xC4: *string = 0x8E; break;
		case 0xE4: *string = 0x84; break;
		case 0xD6: *string = 0x99; break;
		case 0xF6: *string = 0x94; break;
		case 0xDC: *string = 0x9A; break;
		case 0xFC: *string = 0x81; break;
		case 0xDF: *string = 0xE1; break;
			break;
		}
		string++;
	}
}


int main(void)
{
	//Variables
	unsigned char Mein_Satz[] = "Deutsch ist schön, führt bei Umlauten aber zu Problemen. ÄÖÜäöüß.\n";



	//Code
	Umlaute(Mein_Satz);
	printf("%s", Mein_Satz);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}
/*
* Keypad.c
*
* Created: 11/15/2020 4:06:56 AM
*  Author: youss
*/

#include "Keypad1.h"



void   check1 (){
	KeypadPort = 0xEF;
	if(DIO_Read(r1) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('7');
		while(DIO_Read(r1) == 0);
		DIO_Write(DIO_ChannelC7,Low);
		
	}
	if(DIO_Read(r2) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('4');
		while(DIO_Read(r2) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r3) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('1');
		while(DIO_Read(r3) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r4) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('c');
		while(DIO_Read(r4) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
}

void   check2 (){
	KeypadPort = 0xDF;
	if(DIO_Read(r1) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('8');
		while(DIO_Read(r1) == 0);
		DIO_Write(DIO_ChannelC7,Low);
		
	}
	if(DIO_Read(r2) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('5');
		while(DIO_Read(r2) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r3) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('2');
		while(DIO_Read(r3) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r4) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('0');
		while(DIO_Read(r4) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
}

void   check3 (){
	KeypadPort = 0xBF;
	if(DIO_Read(r1) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('9');
		while(DIO_Read(r1) == 0);
		DIO_Write(DIO_ChannelC7,Low);
		
	}
	if(DIO_Read(r2) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('6');
		while(DIO_Read(r2) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r3) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('3');
		while(DIO_Read(r3) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r4) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('=');
		while(DIO_Read(r4) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
}

void   check4 (){
	KeypadPort = 0x7F;
	if(DIO_Read(r1) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('/');
		while(DIO_Read(r1) == 0);
		DIO_Write(DIO_ChannelC7,Low);
		
	}
	if(DIO_Read(r2) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('X');
		while(DIO_Read(r2) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r3) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('-');
		while(DIO_Read(r3) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	if(DIO_Read(r4) == 0){
		DIO_Write(DIO_ChannelC7,High);
		LCD_Char('+');
		while(DIO_Read(r4) == 0);
		DIO_Write(DIO_ChannelC7,Low);
	}
	
}

void   Checking(){
	check1();
	check2();
	check3();
	check4();
}
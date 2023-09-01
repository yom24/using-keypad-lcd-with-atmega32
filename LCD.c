/*
* LCD.c
*
* Created: 11/13/2020 4:53:07 PM
*  Author: youss
*/
#include "LCD.h"

void LCD_init(){
	DIO_Write(RW,Low);
	_delay_ms(20);
	LCD_Comd(0x33);
	_delay_ms(1);
	LCD_Comd(0x32);
	LCD_Comd(0x28);
	LCD_Comd(0x06);
	LCD_Comd(0x0c); // two option 0x0c or 0x0f from data sheet
	LCD_Comd(0x01);
	_delay_ms(2);
}

void LCD_Comd(Uint8 cmd){
	LCD_Dataport = ((LCD_Dataport & 0x0f) | (cmd & 0xf0));
	DIO_Write(RS,Low);
	DIO_Write(E,High);
	_delay_ms(1);
	DIO_Write(E,Low);
	_delay_ms(5);
	
	LCD_Dataport = ((LCD_Dataport & 0x0f) | (cmd <<4));
	DIO_Write(RS,Low);
	DIO_Write(E,High);
	_delay_ms(1);
	DIO_Write(E,Low);
	_delay_ms(2);
}

void LCD_Char(Uint8 c){
	LCD_Dataport = ((LCD_Dataport & 0x0f) | (c & 0xf0));
	DIO_Write(RS,High);
	DIO_Write(E,High);
	_delay_ms(1);
	DIO_Write(E,Low);
	_delay_ms(5);
	
	LCD_Dataport = ((LCD_Dataport & 0x0f) | (c <<4));
	DIO_Write(RS,High);
	DIO_Write(E,High);
	_delay_ms(1);
	DIO_Write(E,Low);
	_delay_ms(2);
	
	
}

void LCD_String(char * string){
	Uint8 i =0;
	while(string[i] != '\0'){
		LCD_Char(string[i]);
		i++;
		
		
	}
	
	
}

void LCD_StringPos(char * string, Uint8 Line, Uint8 Pos){
	
	if(Pos<16){
		switch(Line){
			case 1:
			LCD_Comd(0x80 | Pos); //0x80 address of line 1 LCD get from LCD data sheet
			break;
			case 2:
			LCD_Comd(0xC0 | Pos); //0x80 address of line 2 LCD get from LCD data sheet
			break;
		}
		LCD_String(string);
	}
	
	
}

void LCD_Custom_char(Uint8 loc, Uint8 * string){
	if(loc < 8){
		LCD_Comd((0x40 + (loc*8)));
		for (int i=0;i<8;i++)
		LCD_Char(string[i]);
		
	}

}
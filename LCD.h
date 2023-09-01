/*
 * LCD.h
 *
 * Created: 11/13/2020 4:52:50 PM
 *  Author: youss
 */ 


#ifndef LCD_H_
#define LCD_H_
#define F_CPU 16000000UL
#include "DIO.h"
#include <util/delay.h>

#define LCD_Dataport PortA
#define LCD_Controlport PortB

#define E DIO_ChannelB3
#define RS DIO_ChannelB1
#define RW DIO_ChannelB2															

void LCD_init(void);
void LCD_Comd(Uint8 cmd);
void LCD_Char(Uint8 c);
void LCD_String(char * string);
void LCD_StringPos(char * string, Uint8 Line, Uint8 Pos);
void LCD_Custom_char(Uint8 loc, Uint8 * string);

#endif /* LCD_H_ */
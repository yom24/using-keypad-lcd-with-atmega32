/*
 * U_Pin_LCD.c
 *
 * Created: 11/19/2020 2:31:57 AM
 * Author : youss
 */ 

#include "Keypad1.h"


int main(void)
{
    DIO_Init();
	LCD_init();
    while (1) 
    {
		Checking();
    }
}


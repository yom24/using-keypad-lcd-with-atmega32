/*
 * DIO_CFG.c
 *
 * Created: 9/19/2020 06:48:38 PM
 *  Author: Kareem Youssry
 */ 

#include "DIO_CFG.h"

const DIO_Cfg PinCfg[] = {
	// PORTA
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	// PORTB
	{Input, Low},
	{Output, High},
	{Output, High},
	{Output, High},
	{Input, Low},
	{Output, High},
	{Output, High},
	{Output, High},
	// PORTC
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High},
	// PORTD
	{Input, Low},
	{Input, Low},
	{Input, Low},
	{Input, Low},
	{Output, High},
	{Output, High},
	{Output, High},
	{Output, High}
	};

void DIO_Init()
{
	Uint8 count = 0;
	DIO_PortTypes Portx;
	DIO_ChannelTypes ChannelPos;
	
	for (count = DIO_ChannelA0;count < PINCOUNT; count++)
	{
		Portx = count / 8;
		ChannelPos = count % 8;
		
		switch(Portx)
		{
			// PortA
			case DIO_PortA:
			if (PinCfg[count].PinDir == Output)
			{
				SetBit(DDRA_Reg,ChannelPos);
			}
			else
			{
				ClearBit(DDRA_Reg,ChannelPos);
			}
			break;
			// PortB
			case DIO_PortB:
			if (PinCfg[count].PinDir == Output)
			{
				SetBit(DDRB_Reg,ChannelPos);
			}
			else
			{
				ClearBit(DDRB_Reg,ChannelPos);
			}
			break;
			// PortC
			case DIO_PortC:
			if (PinCfg[count].PinDir == Output)
			{
				SetBit(DDRC_Reg,ChannelPos);
			}
			else
			{
				ClearBit(DDRC_Reg,ChannelPos);
			}
			break;
			// PortD
			case DIO_PortD:
			if (PinCfg[count].PinDir == Output)
			{
				SetBit(DDRD_Reg,ChannelPos);
			}
			else
			{
				ClearBit(DDRD_Reg,ChannelPos);
			}
			break;
		}
	}
}
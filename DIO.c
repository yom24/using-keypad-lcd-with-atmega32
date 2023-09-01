/*
* DIO.c
*
* Created: 9/19/2020 06:08:59 PM
*  Author: Kareem Youssry
*/

#include "DIO.h"

void DIO_Write(DIO_ChannelTypes ChannelID, STD_LevelTypes Level)
{
	DIO_PortTypes Portx = ChannelID / 8;
	DIO_ChannelTypes ChannelPos = ChannelID % 8;
	
	switch(Portx)
	{
		// PortA
		case DIO_PortA:
		if (Level == High)
		{
			SetBit(PortA,ChannelPos);
		}
		else
		{
			ClearBit(PortA,ChannelPos);
		}
		break;
		
		// PortB
		case DIO_PortB:
		if (Level == High)
		{
			SetBit(PortB,ChannelPos);
		}
		else
		{
			ClearBit(PortB,ChannelPos);
		}
		break;
		
		// PortC
		case DIO_PortC:
		if (Level == High)
		{
			SetBit(PortC,ChannelPos);
		}
		else
		{
			ClearBit(PortC,ChannelPos);
		}
		break;
		
		// Port D
		case DIO_PortD:
		if (Level == High)
		{
			SetBit(PortD,ChannelPos);
		}
		else
		{
			ClearBit(PortD,ChannelPos);
		}
		break;
	}
}

Uint8 DIO_Read(DIO_ChannelTypes ChannelID)
{
	Uint8 data;
	DIO_PortTypes Portx = ChannelID / 8;
	DIO_ChannelTypes ChannelPos = ChannelID % 8;
	
	switch (Portx)
	{
		case DIO_PortA:
		data = (GetBit(PinA,ChannelPos));
		//return data;
		break;
		case DIO_PortB:
		data = (GetBit(PinB,ChannelPos));
		//return data;
		break;
		case DIO_PortC:
		data = (GetBit(PinC,ChannelPos));
		//return data;
		break;
		case DIO_PortD:
		data = (GetBit(PinD,ChannelPos));
		//return data;
		break;
	}
	return data;
}

void DIO_Toggle(DIO_ChannelTypes ChannelID)
{
	DIO_PortTypes Portx = ChannelID / 8;
	DIO_ChannelTypes ChannelPos = ChannelID % 8;
	
	switch (Portx)
	{
	// PORTA
	case DIO_PortA:
	ToggleBit(PortA,ChannelPos);
	break;
	
	// PORTB
	case DIO_PortB:
	ToggleBit(PortB,ChannelPos);
	break;
	
	// PORTC
	case DIO_PortC:
	ToggleBit(PortC,ChannelPos);
	break;
	
	// PORTD
	case DIO_PortD:
	ToggleBit(PortD,ChannelPos);
	break;
	}
}
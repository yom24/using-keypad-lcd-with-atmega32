/*
 * DIO_HW.h
 *
 * Created: 9/19/2020 05:10:55 PM
 *  Author: Kareem Youssry
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#include "STD_Types.h"

#define PortA (*((volatile Uint8*)0x3B))
#define DDRA_Reg (*((volatile Uint8*)0x3A))
#define PinA (*((volatile Uint8*)0x39))

#define PortB (*((volatile Uint8*)0x38))
#define DDRB_Reg (*((volatile Uint8*)0x37))
#define PinB (*((volatile Uint8*)0x36))

#define PortC (*((volatile Uint8*)0x35))
#define DDRC_Reg (*((volatile Uint8*)0x34))
#define PinC (*((volatile Uint8*)0x33))

#define PortD (*((volatile Uint8*)0x32))
#define DDRD_Reg (*((volatile Uint8*)0x31))
#define PinD (*((volatile Uint8*)0x30))

#endif /* DIO_HW_H_ */
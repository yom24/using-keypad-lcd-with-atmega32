/*
 * Keypad1.h
 *
 * Created: 11/15/2020 4:06:33 AM
 *  Author: youss
 */ 


#ifndef KEYPAD1_H_
#define KEYPAD1_H_


#include "LCD.h"

#define r1 DIO_ChannelD0
#define r2 DIO_ChannelD1
#define r3 DIO_ChannelD2
#define r4 DIO_ChannelD3

#define c1 DIO_ChannelD4
#define c2 DIO_ChannelD5
#define c3 DIO_ChannelD6
#define c4 DIO_ChannelD7

#define KeypadPin PinD
#define KeypadPort PortD 
//#define keypadDDR DDRD_Reg we doesn't need it when use layered arch bec we make it DIO_cfg


void check1 ();
void check2 ();
void check3 ();
void check4 ();
void Checking();

#endif /* KEYPAD1_H_ */
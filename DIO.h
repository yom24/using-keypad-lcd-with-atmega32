/*
 * DIO.h
 *
 * Created: 9/19/2020 06:08:07 PM
 *  Author: Kareem Youssry
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "STD_Types.h"
#include "BitMath.h"
#include "DIO_HW.h"
#include "DIO_Types.h"
#include "DIO_CFG.h"
void DIO_Write(DIO_ChannelTypes ChannelID, STD_LevelTypes Level);
Uint8 DIO_Read(DIO_ChannelTypes ChannelID);
void DIO_Toggle(DIO_ChannelTypes ChannelID);

#endif /* DIO_H_ */
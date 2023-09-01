/*
 * DIO_CFG.h
 *
 * Created: 9/19/2020 06:48:51 PM
 *  Author: Kareem Youssry
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO.h"

typedef struct  
{
	DIO_DirTypes PinDir;
	STD_LevelTypes Level;
}DIO_Cfg;

#define PINCOUNT 32

void DIO_Init(void);

#endif /* DIO_CFG_H_ */
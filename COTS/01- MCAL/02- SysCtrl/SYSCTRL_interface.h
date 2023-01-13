/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  SYSCTRL 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef SYSCTRL_INTERFACE_H
#define SYSCTRL_INTERFACE_H

#include "STD_TYPES.h"

/**************************************************************************/

/*GPIO Ports defination*/
#define GPIOA				0
#define GPIOB				1
#define GPIOC				2
#define GPIOD				3
#define GPIOE				4
#define GPIOF				5

/*Buses defination*/
#define AHB					6
#define APB					7

/*Timers defination*/
#define TIMER0				8
#define TIMER1				9
#define TIMER2				10
#define TIMER3				11
#define TIMER4				12
#define TIMER5				13

/**************************************************************************/



void SYSCTRL_vidInit(void);
/*******************************************************/

/*
Argument : AHB
		   APB
*/
void SYSCTRL_vidControlGPIOBus(u8 Copy_u8Bus , u8 Copy_u8Port);
/*******************************************************/



/*
Argument : GPIO0
		   Timer0
		   ADC
		   I2C
		   ....
*/
void SYSCTRL_vidEnablePrephiral(u8 Copy_u8PrephiralID);
/*******************************************************/



/*
Argument : GPIO0
		   Timer0
		   ADC
		   I2C
		   ....
*/
void SYSCTRL_vidDisablePrephiral(u8 Copy_u8PrephiralID);
/*******************************************************/


#endif
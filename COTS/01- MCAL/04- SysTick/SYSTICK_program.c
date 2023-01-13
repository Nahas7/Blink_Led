/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  SYSTICK	 		  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SYSTICK_interface.h"
#include "SYSTICK_private.h"
#include "SYSTICK_config.h"

static void (*ptrF_SYSTICK)(void);



void SYSTICK_vidDelaySec(void)
{
	/*Setting the value in STRELOAD register*/
	/*(1S)=16M clk Cycle*/
	STRELOAD = 0x00F42400 ;
	
	/*Clear STCURRENT register by writting any value to it*/
	STCURRENT = 0 ;
	
	/*Setting systick clock and interrupt configuration and enable it*/
	STCTRL |=  0x7;
}

/************************************ 	ISR		****************************/
void SYSTICK_SetCallBack(void(*ptrF_ISR)(void))
{
	ptrF_SYSTICK = ptrF_ISR ;
}

void SYSTICK_HANDLER(void)
{
	/*Clear Flag*/
	STCURRENT = 0 ;
	
	/*implent required function*/
	ptrF_SYSTICK();
}

	
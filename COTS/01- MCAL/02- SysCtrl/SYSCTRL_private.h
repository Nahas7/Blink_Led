/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  SYSCTRL 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef SYSCTRL_PRIVATE_H
#define SYSCTRL_PRIVATE_H

/* register defination */

/* Base Address */
#define BASE_ADDRESS			0x400FE000

/***********************************************************/

#define RCC 						*((volatile u32*)(BASE_ADDRESS+0x060))
#define GPIOHBCTL				*((volatile u32*)(BASE_ADDRESS+0x06C))
#define MOSCCTL					*((volatile u32*)(BASE_ADDRESS+0x07C))
#define RCGCTIMER				*((volatile u32*)(BASE_ADDRESS+0x604))
#define RCGCGPIO				*((volatile u32*)(BASE_ADDRESS+0x608))


/*****************************************************************/



/********************************************************************/
#define MOSC					1
#define PIOSC					2
#define MHZ_16					0x15


#endif

/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  GPIO	 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H

/**********************************************************************************************************************/


/* Setting intial modes to GPIOs */

/* HINT : If that doesn't conflict with the hardware,You can choose more than mode in the same port by using(or)(|)operator 
			
			EX: 
			#defien GPIOA_MODE				GPIOA | A_CAN
*/
/*MODES:-
			
	PORT-A MODES 
		GPIOA			
		A_UART			
		A_CAN			
		A_SSI			
		A_I2C			
	
	PORT-B MODES 
		GPIOB			
		B_UART			
		B_I2C			
		B_SSI			
		B_CAN			
		
	PORT-C MODES 
		GPIOC
			..	
			..
	PORT-D MODES 			
			..
			..
	PORT-E MODES 			
			..
			..
	PORT-F MODES
			..
			..
*/
#define GPIOA_MODE				GPIO
#define GPIOB_MODE				GPIO
#define GPIOC_MODE              GPIO
#define GPIOD_MODE              GPIO
#define GPIOE_MODE              GPIO
#define GPIOF_MODE              GPIO
/**********************************************************************************************************************/
/**********************************************************************************************************************/


/* 	GPIOs BUSES  */
/*BUSES :
			AHB
			ABP	
*/
#define GPIO_BUS				AHB


#endif
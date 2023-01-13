/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  GPIO	 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "STD_TYPES.h"
/********************************************************************************************/
/********************************************************************************************/
/*PORT DEFINATTIONS*/
#define PORTA								0
#define PORTB								1
#define PORTC								2
#define PORTD								3
#define PORTE								4
#define PORTF								5


/*DIRECTIONS DFFINATIONS */
#define INPUT 								0
#define OUTPUT								1


/*VALUES DEFINATIONS*/
#define HIGH								1
#define LOW									0

/*BUSES DEFINATIONS*/
#define AHB									1
#define ABP									0

/*MODES DEFINATIONS */
	/* PORT-A MODES */
#define GPIO								0x0
#define A_UART								(0x1) | (0x1<<4)
#define A_CAN								(0x8) | (0x8<<4)
#define A_SSI								(0x2<<8)  | (0x2<<12) | (0x2<<16) | (0x2<<20)
#define A_I2C								(0x3<<24) | (0x3<<28) 

	/* PORT-B MODES */ 
#define GPIO								0x0
#define B_UART								(0X1) | (0X1<<4)
#define B_I2C								(0X3<<8) | (0X3<<12)
#define B_SSI								(0x2<<16) | (0x2<<20) | (0x2<<24) | (0x2<<28)
#define B_CAN								(0x8<<16) | (0x8<<20)

	/* PORT-C MODES */
#define GPIO 								0x0
	/* PORT-D MODES */
	/* PORT-E MODES */
	/* PORT-F MODES */


/*CURRENT DEFINATIONS*/
#define A_2									0
#define A_4									1
#define A_8									2


/*INTERNAL ATTACH*/
#define PullUp								0
#define PullDown							1
#define OpenDrain							2


/*BUSES DEFINATIONS*/
#define AHB									1
#define ABP									0
/********************************************************************************************/
/********************************************************************************************/

/*Arguments :-
			Port    		:  			PORTA
										PORTB
										PORTC
										PORTD
										PORTE
										PORTF
								
								
			Pin    			: 			(0-7)
			
										
			mode			:			GPIOA_MODE
										GPIOB_MODE
										GPIOC_MODE
										GPIOD_MODE
										GPIOE_MODE
										GPIOF_MODE
			

			direction		:			INPUT
										OUTPUT
										
										
			level			:			HIGH
										LOW							
										
										
			attach			:			PullUp
										PullDown
										OpenDrain
										
			
			current_drive	:			A_2
										A_4
										A_8
															
*/			
typedef struct
{
	u8 port ;
	u8 pin ;
	u8 mode ;
	u8 direction ;
	u8 level ;
	u8 attach ;
	u8 current_drive ;
}Pin_config_t ;

void GPIO_vidInit(Pin_config_t* Copy_ptrStrConfig);

/***********************************************************************************************/
/***********************************************************************************************/

/*Arguments :-
			Copy_u8Port    		:  		PORTA
										PORTB
										PORTC
										PORTD
										PORTE
										PORTF
								
								
			Copy_u8Pin    		: 		(0-7)
			
			Copy_u8Value		:		HIGH
										LOW
*/			
void GPIO_vidSetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value);

/***********************************************************************************************/
/***********************************************************************************************/

/*Arguments :-
			Copy_u8Port    		:  		PORTA
										PORTB
										PORTC
										PORTD
										PORTE
										PORTF
								
								
			Copy_u8Pin  		: 		(0-7)
			
			&Copy_ptru8Value	:		Ptr to variable that recieved the result(HIGH-LOW)
*/			
void GPIO_vidGetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8* Copy_ptru8Value);
/***********************************************************************************************/
/***********************************************************************************************/

/*Arguments :-
			Copy_u8Port    		:  		PORTA
										PORTB
										PORTC
										PORTD
										PORTE
										PORTF
								
								
			Copy_u8Value		:		HIGH
										LOW
*/		
void GPIO_vidSetPortValue(u8 Copy_u8Port , u8 Copy_u8Value);
/***********************************************************************************************/
/***********************************************************************************************/

/*Arguments :-
			Copy_u8Port    		:  		PORTA
										PORTB
										PORTC
										PORTD
										PORTE
										PORTF
								
											
			&Copy_ptru8Value	:		Ptr to variable that recieved the result(HIGH-LOW)
*/			
void GPIO_vidGetPortValue(u8 Copy_u8Port , u8* Copy_ptru8Value);

#endif
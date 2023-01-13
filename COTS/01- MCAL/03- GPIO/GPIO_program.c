/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  GPIO	 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


void GPIO_vidInit(Pin_config_t* Copy_ptrStrConfig)
{
	#if GPIO_BUS == AHB
	switch (Copy_ptrStrConfig->port)
	{
		/**********************		PORTA 		**********************/
		case PORTA :
					/*UNLOCKING PORTA*/
					GPIOA_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOA_GPIOCR_AHB = 0XFF ;				
					
					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOA_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOA_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOA_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOA_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOA_GPIOPCTL_AHB = GPIOA_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOA_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOA_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOA_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOA_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOA_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullDown)
					{
						SET_BIT(GPIOA_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOA_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOA_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOA_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;
					break;
					
					
		/**********************		PORTB 		**********************/
		case PORTB :
					/*UNLOCKING PORTB*/
					GPIOB_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOB_GPIOCR_AHB = 0XFF ;				

					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOB_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOB_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOB_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOB_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOB_GPIOPCTL_AHB = GPIOB_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOB_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOB_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOB_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOB_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOB_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullDown)
					{
						SET_BIT(GPIOB_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOB_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOB_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOB_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;
					break ;
					
										
		/**********************		PORTC 		**********************/
		case PORTC :
					/*UNLOCKING PORTA*/
					GPIOC_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOC_GPIOCR_AHB = 0XFF ;				

					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOC_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOC_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOC_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOC_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOC_GPIOPCTL_AHB = GPIOC_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOC_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOC_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOC_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOC_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOC_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullDown)
					{
						SET_BIT(GPIOC_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOC_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
				/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOC_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOC_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;	
					break ;


		/**********************		PORTD 		**********************/
		case PORTD :
					/*UNLOCKING PORTD*/
					GPIOD_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOD_GPIOCR_AHB = 0XFF ;				

					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOD_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOD_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOD_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOD_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOD_GPIOPCTL_AHB = GPIOC_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOD_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOD_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOD_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOD_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOD_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullDown)
					{
						SET_BIT(GPIOD_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOD_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOD_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOD_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;
					break ;


		/**********************		PORTE 		**********************/
		case PORTE :
					/*UNLOCKING PORTE*/
					GPIOE_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOE_GPIOCR_AHB = 0XFF ;				

					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOE_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOE_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOE_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOE_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOE_GPIOPCTL_AHB = GPIOC_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOE_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOE_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOE_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOE_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOE_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOE_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOE_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOE_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOE_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;
					break ;	
					
		
		/**********************		PORTF 		**********************/
		case PORTF :
					/*UNLOCKING PORTF*/
					GPIOF_GPIOLOCK_AHB = GPIOLOCK_KEY ;
					GPIOF_GPIOCR_AHB = 0XFF ;				

					/*SET PIN DIRECTION*/
					if (Copy_ptrStrConfig->direction == INPUT)
					{
						CLR_BIT(GPIOF_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					else if (Copy_ptrStrConfig->direction == OUTPUT)
					{
						SET_BIT(GPIOF_DIR_AHB , (Copy_ptrStrConfig->pin));
					}
					
					/*SELECT MODE*/
					if(Copy_ptrStrConfig->mode == GPIO)
					{
						CLR_BIT(GPIOF_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
					}
					else
					{
						SET_BIT(GPIOF_GPIOAFSEL_AHB , (Copy_ptrStrConfig->pin));
						GPIOF_GPIOPCTL_AHB = GPIOC_MODE ;
					}
					
					/*ENABLE DIGITAL*/
					SET_BIT(GPIOF_GPIODEN_AHB , (Copy_ptrStrConfig->pin));
					
					/*SELECT CURRENT DRIVE*/
					if(Copy_ptrStrConfig->current_drive == A_2)
					{
						SET_BIT(GPIOF_GPIODR2R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_4)
					{
						SET_BIT(GPIOF_GPIODR4R_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->current_drive == A_8)
					{
						SET_BIT(GPIOF_GPIODR8R_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SELECT INTERNAL ATTACH*/
					if(Copy_ptrStrConfig->attach == PullUp)
					{
						SET_BIT(GPIOF_GPIOPUR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == PullDown)
					{
						SET_BIT(GPIOF_GPIOPDR_AHB , (Copy_ptrStrConfig->pin));			
					}
					else if(Copy_ptrStrConfig->attach == OpenDrain)
					{
						SET_BIT(GPIOF_GPIOODR_AHB , (Copy_ptrStrConfig->pin));			
					}
					
					/*SETTING INITIAL VALUE*/
					CLR_BIT(GPIOF_DATA_AHB , (Copy_ptrStrConfig->pin));	
					GPIOF_DATA_AHB |= ((Copy_ptrStrConfig->level)<<(Copy_ptrStrConfig->pin)) ;
					break ;
					
		default	:	/*return error*/ 
					break;	
	}
	/*the same code will be implented but we replace (APB) instead of (AHB) if the user config 
the bus og GPIO :APB
	*/
	#endif
}



void GPIO_vidSetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value)
{
	if (Copy_u8Value == HIGH)
	{
		switch (Copy_u8Port)
		{
			case PORTA 	: SET_BIT(GPIOA_DATA_AHB , Copy_u8Pin); break ;
			case PORTB 	: SET_BIT(GPIOB_DATA_AHB , Copy_u8Pin); break ;
			case PORTC 	: SET_BIT(GPIOC_DATA_AHB , Copy_u8Pin); break ;
			case PORTD 	: SET_BIT(GPIOD_DATA_AHB , Copy_u8Pin); break ;
			case PORTE 	: SET_BIT(GPIOE_DATA_AHB , Copy_u8Pin); break ;
			case PORTF 	: SET_BIT(GPIOF_DATA_AHB , Copy_u8Pin); break ;
			default 	: break ;
		}
	}
	else if (Copy_u8Value == LOW)
	{
		switch (Copy_u8Port)
		{
			case PORTA 	: CLR_BIT(GPIOA_DATA_AHB , Copy_u8Pin); break ;
			case PORTB 	: CLR_BIT(GPIOB_DATA_AHB , Copy_u8Pin); break ;
			case PORTC 	: CLR_BIT(GPIOC_DATA_AHB , Copy_u8Pin); break ;
			case PORTD 	: CLR_BIT(GPIOD_DATA_AHB , Copy_u8Pin); break ;
			case PORTE 	: CLR_BIT(GPIOE_DATA_AHB , Copy_u8Pin); break ;
			case PORTF 	: CLR_BIT(GPIOF_DATA_AHB , Copy_u8Pin); break ;
			default 	: break ;
		}
	}
}


void GPIO_vidGetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8* Copy_ptru8Value)
{
	switch (Copy_u8Port)
		{
			case PORTA 	: *Copy_ptru8Value = GET_BIT(GPIOA_DATA_AHB , Copy_u8Pin); break ;
			case PORTB 	: *Copy_ptru8Value = GET_BIT(GPIOB_DATA_AHB , Copy_u8Pin); break ;
			case PORTC 	: *Copy_ptru8Value = GET_BIT(GPIOC_DATA_AHB , Copy_u8Pin); break ;
			case PORTD 	: *Copy_ptru8Value = GET_BIT(GPIOD_DATA_AHB , Copy_u8Pin); break ;
			case PORTE 	: *Copy_ptru8Value = GET_BIT(GPIOE_DATA_AHB , Copy_u8Pin); break ;
			case PORTF 	: *Copy_ptru8Value = GET_BIT(GPIOF_DATA_AHB , Copy_u8Pin); break ;
			default 	: break ;
		}
}


void GPIO_vidSetPortValue(u8 Copy_u8Port , u8 Copy_u8Value)
{
	switch (Copy_u8Port)
		{
			case PORTA 	: GPIOA_DATA_AHB = Copy_u8Value ; break ;
			case PORTB 	: GPIOB_DATA_AHB = Copy_u8Value ; break ;
			case PORTC 	: GPIOC_DATA_AHB = Copy_u8Value ; break ;
			case PORTD 	: GPIOD_DATA_AHB = Copy_u8Value ; break ;
			case PORTE 	: GPIOE_DATA_AHB = Copy_u8Value ; break ;
			case PORTF 	: GPIOF_DATA_AHB = Copy_u8Value ; break ;
			default 	: break ;
		}
}


void GPIO_vidGetPortValue(u8 Copy_u8Port , u8* Copy_ptru8Value)
{
	switch (Copy_u8Port)
		{
			case PORTA 	: *Copy_ptru8Value = (u8)GPIOA_DATA_AHB ; break ;
			case PORTB 	: *Copy_ptru8Value = (u8)GPIOB_DATA_AHB ; break ;
			case PORTC 	: *Copy_ptru8Value = (u8)GPIOC_DATA_AHB ; break ;
			case PORTD 	: *Copy_ptru8Value = (u8)GPIOD_DATA_AHB ; break ;
			case PORTE 	: *Copy_ptru8Value = (u8)GPIOE_DATA_AHB ; break ;
			case PORTF 	: *Copy_ptru8Value = (u8)GPIOF_DATA_AHB ; break ;
			default 	: break ;
		}
}

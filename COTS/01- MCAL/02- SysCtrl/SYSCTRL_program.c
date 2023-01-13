/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  SYSCTRL 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SYSCTRL_interface.h"
#include "SYSCTRL_private.h"
#include "SYSCTRL_config.h"

void SYSCTRL_vidInit(void)
{
	#if CLOCK_SOURCE == MOSC
	/*choose main osc*/
	CLR_BIT( RCC , 4 );
	CLR_BIT( RCC , 5 );
	
	/*The system clock is derived from the OSC source and dividedby the divisor*/
	SET_BIT( RCC , 11 );
	

	/*Power down PLL*/
	SET_BIT( RCC , 13 );
	
	/*Select the frequency out from MOSC - 16MHZ*/
	RCC &= ~(0x1F);
	RCC |= (CLOCK_FREQUENCY<<6);
		
	/* Enable main Oscillator */
	 CLR_BIT( RCC , 0 );
	 
	/* The MOSC monitor circuit is enabled & no external crystal connected*/
	MOSCCTL  = 0;
	MOSCCTL &= 5;
	
	#elif CLOCK_SOURCE == PIOSC
	SET_BIT(RCC,4);
	CLR_BIT(RCC,5);

	RCC &= (u32)(~(0x07800000)) ;

	#endif
}


void SYSCTRL_vidControlGPIOBus(u8 Copy_u8Bus , u8 Copy_u8Port)
{
	if ( Copy_u8Bus == AHB )
	{
		switch (Copy_u8Port)
		{
			case GPIOA : SET_BIT( GPIOHBCTL , 0 ); break ;
			case GPIOB : SET_BIT( GPIOHBCTL , 1 ); break ;
			case GPIOC : SET_BIT( GPIOHBCTL , 2 ); break ;
			case GPIOD : SET_BIT( GPIOHBCTL , 3 ); break ;
			case GPIOE : SET_BIT( GPIOHBCTL , 4 ); break ;
			case GPIOF : SET_BIT( GPIOHBCTL , 5 ); break ;
			default    : /*Error*/                 break ;
		}
	}
	else if ( Copy_u8Bus == APB )
	{
		switch (Copy_u8Port)
		{
			case GPIOA : CLR_BIT( GPIOHBCTL , 0 ); break ;
			case GPIOB : CLR_BIT( GPIOHBCTL , 1 ); break ;
			case GPIOC : CLR_BIT( GPIOHBCTL , 2 ); break ;
			case GPIOD : CLR_BIT( GPIOHBCTL , 3 ); break ;
			case GPIOE : CLR_BIT( GPIOHBCTL , 4 ); break ;
			case GPIOF : CLR_BIT( GPIOHBCTL , 5 ); break ;
			default    : /*Error*/                 break ;
		}
	}
}


void SYSCTRL_vidEnablePrephiral(u8 Copy_u8PrephiralID)
{
	switch (Copy_u8PrephiralID)
	{
		/* Enable Timer Modules*/
		case TIMER0 : SET_BIT( RCGCTIMER , 0 ); break ;
		case TIMER1 : SET_BIT( RCGCTIMER , 1 ); break ;
		case TIMER2 : SET_BIT( RCGCTIMER , 2 ); break ;
		case TIMER3 : SET_BIT( RCGCTIMER , 3 ); break ;
		case TIMER4 : SET_BIT( RCGCTIMER , 4 ); break ;
		case TIMER5 : SET_BIT( RCGCTIMER , 5 ); break ;
		
		/* Enable GPIO Modules*/
		case GPIOA : SET_BIT( RCGCGPIO , 0 ); break ;
		case GPIOB : SET_BIT( RCGCGPIO , 1 ); break ;
		case GPIOC : SET_BIT( RCGCGPIO , 2 ); break ;
		case GPIOD : SET_BIT( RCGCGPIO , 3 ); break ;
		case GPIOE : SET_BIT( RCGCGPIO , 4 ); break ;
		case GPIOF : SET_BIT( RCGCGPIO , 5 ); break ;
		
		default    : /*Error*/                 break ;
	}
}

void SYSCTRL_vidDisablePrephiral(u8 Copy_u8PrephiralID)
{
	switch (Copy_u8PrephiralID)
	{
		/* Disable Timer Modules*/
		case TIMER0 : CLR_BIT( RCGCTIMER , 0 ); break ;
		case TIMER1 : CLR_BIT( RCGCTIMER , 1 ); break ;
		case TIMER2 : CLR_BIT( RCGCTIMER , 2 ); break ;
		case TIMER3 : CLR_BIT( RCGCTIMER , 3 ); break ;
		case TIMER4 : CLR_BIT( RCGCTIMER , 4 ); break ;
		case TIMER5 : CLR_BIT( RCGCTIMER , 5 ); break ;
		
		/* Disable GPIO Modules*/
		case GPIOA : CLR_BIT( RCGCGPIO , 0 ); break ;
		case GPIOB : CLR_BIT( RCGCGPIO , 1 ); break ;
		case GPIOC : CLR_BIT( RCGCGPIO , 2 ); break ;
		case GPIOD : CLR_BIT( RCGCGPIO , 3 ); break ;
		case GPIOE : CLR_BIT( RCGCGPIO , 4 ); break ;
		case GPIOF : CLR_BIT( RCGCGPIO , 5 ); break ;
		
		default    : /*Error*/                 break ;	
	}
}

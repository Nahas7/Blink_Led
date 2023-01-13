/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  NVIC 				  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM		  ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"


void MNVIC_vidEnablePerphiral( u8 Copy_u8PerphiralID )
{
	/*Enable interrupts in EN0*/
	if (Copy_u8PerphiralID <=31)
	{
			SET_BIT( EN0 , Copy_u8PerphiralID);
	}
	/*Enable interrupts in EN1*/
	else if (Copy_u8PerphiralID <= 63)
	{
		Copy_u8PerphiralID -= 32 ;
		SET_BIT( EN1 , Copy_u8PerphiralID);
	}
	
	/*Enable interrupts in EN2*/
	else if (Copy_u8PerphiralID <= 95)
	{
		Copy_u8PerphiralID -= 64 ;
		SET_BIT( EN2 , Copy_u8PerphiralID);
	}
	
	/*Enable interrupts in EN3*/
	else if (Copy_u8PerphiralID <= 127)
	{
		Copy_u8PerphiralID -= 96 ;
		SET_BIT( EN3 , Copy_u8PerphiralID);
	}
	
	/*Enable interrupts in EN4*/
	else if (Copy_u8PerphiralID <= 138)
	{
		Copy_u8PerphiralID -= 128 ;
		SET_BIT( EN4 , Copy_u8PerphiralID);
	}
}

void MNVIC_vidDisablePerphiral( u8 Copy_u8PerphiralID )
{
	/*Disable interrupts in EN0*/
	if (Copy_u8PerphiralID <=31)
	{
		SET_BIT( DIS0 , Copy_u8PerphiralID);
	}

	/*Disable interrupts in EN1*/
	else if (Copy_u8PerphiralID <= 63)
	{
		Copy_u8PerphiralID -= 32 ;
		SET_BIT( DIS1 , Copy_u8PerphiralID);
	}
	
	/*Disable interrupts in EN2*/
	else if (Copy_u8PerphiralID <= 95)
	{
		Copy_u8PerphiralID -= 64 ;
		SET_BIT( DIS2 , Copy_u8PerphiralID);
	}
	
	/*Disable interrupts in EN3*/
	else if (Copy_u8PerphiralID <= 127)
	{
		Copy_u8PerphiralID -= 96 ;
		SET_BIT( DIS3 , Copy_u8PerphiralID);
	}
	
	/*Disable interrupts in EN4*/
	else if (Copy_u8PerphiralID <= 138)
	{
		Copy_u8PerphiralID -= 128 ;
		SET_BIT( DIS4 , Copy_u8PerphiralID);
	}
}

void MNVIC_vidSetPending( u8 Copy_u8PerphiralID )
{
	/*Set pending falg in PEND0*/
	if (Copy_u8PerphiralID <=31)
	{
		SET_BIT( PEND0 , Copy_u8PerphiralID);
	}

	/*Set pending falg in PEND1*/
	else if (Copy_u8PerphiralID <= 63)
	{
		Copy_u8PerphiralID -= 32 ;
		SET_BIT( PEND1 , Copy_u8PerphiralID);
	}
	
	/*Set pending falg in PEND2*/
	else if (Copy_u8PerphiralID <= 95)
	{
		Copy_u8PerphiralID -= 64 ;
		SET_BIT( PEND2 , Copy_u8PerphiralID);
	}
	
	/*Set pending falg in PEND3*/
	else if (Copy_u8PerphiralID <= 127)
	{
		Copy_u8PerphiralID -= 96 ;
		SET_BIT( PEND3 , Copy_u8PerphiralID);
	}
	
	/*Set pending falg in PEND4*/
	else if (Copy_u8PerphiralID <= 138)
	{
		Copy_u8PerphiralID -= 128 ;
		SET_BIT( PEND4 , Copy_u8PerphiralID);
	}
}



void MNVIC_vidClearPending( u8 Copy_u8PerphiralID )
{
	/*Clear pending falg in PEND0*/
	if (Copy_u8PerphiralID <=31)
	{
		SET_BIT( UNPEND0 , Copy_u8PerphiralID);
	}

	/*Clear pending falg in PEND1*/
	else if (Copy_u8PerphiralID <= 63)
	{
		Copy_u8PerphiralID -= 32 ;
		SET_BIT( UNPEND1 , Copy_u8PerphiralID);
	}
	
	/*Clear pending falg in PEND2*/
	else if (Copy_u8PerphiralID <= 95)
	{
		Copy_u8PerphiralID -= 64 ;
		SET_BIT( UNPEND2 , Copy_u8PerphiralID);
	}
	
	/*Clear pending falg in PEND3*/
	else if (Copy_u8PerphiralID <= 127)
	{
		Copy_u8PerphiralID -= 96 ;
		SET_BIT( UNPEND3 , Copy_u8PerphiralID);
	}
	
	/*Clear pending falg in PEND4*/
	else if (Copy_u8PerphiralID <= 138)
	{
		Copy_u8PerphiralID -= 128 ;
		SET_BIT( UNPEND4 , Copy_u8PerphiralID);
	}
}

u8 MNVIC_u8GetActive(u8 Copy_u8PerphiralID )
{
	/*the reading that will be returned*/
	u8 Local_u8Result = 0 ;
	
	/*Get active flag in AVTIVE0*/
	if (Copy_u8PerphiralID <=31)
	{
		Local_u8Result = GET_BIT( ACTIVE0 , Copy_u8PerphiralID);
	}

	/*Get active flag in AVTIVE1*/
	else if (Copy_u8PerphiralID <= 63)
	{
		Copy_u8PerphiralID -= 32 ;
		Local_u8Result = GET_BIT( ACTIVE1 , Copy_u8PerphiralID);
	}
	
	/*Get active flag in AVTIVE2*/
	else if (Copy_u8PerphiralID <= 95)
	{
		Copy_u8PerphiralID -= 64 ;
		Local_u8Result = GET_BIT( ACTIVE2 , Copy_u8PerphiralID);
	}
	
	/*Get active flag in AVTIVE3*/
	else if (Copy_u8PerphiralID <= 127)
	{
		Copy_u8PerphiralID -= 96 ;
		Local_u8Result = GET_BIT( ACTIVE3 , Copy_u8PerphiralID);
	}
	
	/*Get active flag in AVTIVE4*/
	else if (Copy_u8PerphiralID <= 138)
	{
		Copy_u8PerphiralID -= 128 ;
		Local_u8Result = GET_BIT( ACTIVE4 , Copy_u8PerphiralID);
	}
	
	return Local_u8Result ; 
}
/*

void MNVIC_vidSetPeriorty( u8 Copy_u8PerphiralID , u8 Copy_u8Group , u8 Copy_u8GroupPeriorty , u8 Copy_u8SubPeriorty)
{	
	
}
*/
/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  NVIC 				  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM		  ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

void MNVIC_vidEnablePerphiral( u8 Copy_u8PerphiralID );

void MNVIC_vidDisablePerphiral( u8 Copy_u8PerphiralID );

void MNVIC_vidSetPending( u8 Copy_u8PerphiralID );

void MNVIC_vidClearPending( u8 Copy_u8PerphiralID );

u8 MNVIC_u8GetActive(u8 Copy_u8PerphiralID );

void MNVIC_vidSetPeriorty( u8 Copy_u8PerphiralID , u8 Copy_u8Group , u8 Copy_u8GroupPeriorty , u8 Copy_u8SubPeriorty);















#endif
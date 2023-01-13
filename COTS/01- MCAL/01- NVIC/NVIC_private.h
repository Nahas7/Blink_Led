/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  NVIC 				  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM		  ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

/*	Register Defination		*/

/* BASE ADDRESS*/
#define BASE_ADDRESS			 0xE000E000
/**********************************************************/

/*Enable registers*/
#define EN0				*((volatile u32*)(0x100+BASE_ADDRESS))
#define EN1				*((volatile u32*)(0x104+BASE_ADDRESS))
#define EN2				*((volatile u32*)(0x108+BASE_ADDRESS))
#define EN3				*((volatile u32*)(0x10C+BASE_ADDRESS))
#define EN4				*((volatile u32*)(0x110+BASE_ADDRESS))

/*Disable registers*/
#define DIS0			*((volatile u32*)(0x180+BASE_ADDRESS))
#define DIS1			*((volatile u32*)(0x184+BASE_ADDRESS))
#define DIS2			*((volatile u32*)(0x188+BASE_ADDRESS))
#define DIS3			*((volatile u32*)(0x18C+BASE_ADDRESS))
#define DIS4			*((volatile u32*)(0x190+BASE_ADDRESS))

/*Pending flag registers*/
#define PEND0			*((volatile u32*)(0x200+BASE_ADDRESS))
#define PEND1			*((volatile u32*)(0x204+BASE_ADDRESS))
#define PEND2			*((volatile u32*)(0x208+BASE_ADDRESS))
#define PEND3			*((volatile u32*)(0x20C+BASE_ADDRESS))
#define PEND4			*((volatile u32*)(0x210+BASE_ADDRESS))

/*Pending flag registers*/
#define UNPEND0			*((volatile u32*)(0x280+BASE_ADDRESS))
#define UNPEND1			*((volatile u32*)(0x284+BASE_ADDRESS))
#define UNPEND2			*((volatile u32*)(0x288+BASE_ADDRESS))
#define UNPEND3			*((volatile u32*)(0x28C+BASE_ADDRESS))
#define UNPEND4			*((volatile u32*)(0x290+BASE_ADDRESS))

/*Avtive falg registers*/ 
#define ACTIVE0			*((volatile u32*)(0x300+BASE_ADDRESS))
#define ACTIVE1			*((volatile u32*)(0x304+BASE_ADDRESS))
#define ACTIVE2			*((volatile u32*)(0x308+BASE_ADDRESS))
#define ACTIVE3			*((volatile u32*)(0x30C+BASE_ADDRESS))
#define ACTIVE4			*((volatile u32*)(0x310+BASE_ADDRESS))

/*Periorty registers*/
#define PRI0			*((volatile u32*)(0x400+BASE_ADDRESS))
#define PRI1			*((volatile u32*)(0x404+BASE_ADDRESS))
#define PRI2			*((volatile u32*)(0x408+BASE_ADDRESS))
#define PRI3			*((volatile u32*)(0x40C+BASE_ADDRESS))
#define PRI4			*((volatile u32*)(0x410+BASE_ADDRESS))
#define PRI5			*((volatile u32*)(0x414+BASE_ADDRESS))
#define PRI6			*((volatile u32*)(0x418+BASE_ADDRESS))
#define PRI7			*((volatile u32*)(0x41C+BASE_ADDRESS))
#define PRI8			*((volatile u32*)(0x420+BASE_ADDRESS))
#define PRI9			*((volatile u32*)(0x424+BASE_ADDRESS))
#define PRI10			*((volatile u32*)(0x428+BASE_ADDRESS))
#define PRI11			*((volatile u32*)(0x42C+BASE_ADDRESS))
#define PRI12			*((volatile u32*)(0x430+BASE_ADDRESS))
#define PRI13			*((volatile u32*)(0x434+BASE_ADDRESS))
#define PRI14			*((volatile u32*)(0x438+BASE_ADDRESS))
#define PRI15			*((volatile u32*)(0x43C+BASE_ADDRESS))
#define PRI16			*((volatile u32*)(0x440+BASE_ADDRESS))
#define PRI17			*((volatile u32*)(0x444+BASE_ADDRESS))
#define PRI18			*((volatile u32*)(0x448+BASE_ADDRESS))
#define PRI19			*((volatile u32*)(0x44C+BASE_ADDRESS))
#define PRI20			*((volatile u32*)(0x450+BASE_ADDRESS))
#define PRI21			*((volatile u32*)(0x454+BASE_ADDRESS))
#define PRI22			*((volatile u32*)(0x458+BASE_ADDRESS))
#define PRI23			*((volatile u32*)(0x45C+BASE_ADDRESS))
#define PRI24			*((volatile u32*)(0x460+BASE_ADDRESS))
#define PRI25			*((volatile u32*)(0x464+BASE_ADDRESS))
#define PRI26			*((volatile u32*)(0x468+BASE_ADDRESS))
#define PRI27			*((volatile u32*)(0x46C+BASE_ADDRESS))
#define PRI28			*((volatile u32*)(0x470+BASE_ADDRESS))
#define PRI29			*((volatile u32*)(0x474+BASE_ADDRESS))
#define PRI30			*((volatile u32*)(0x478+BASE_ADDRESS))
#define PRI31			*((volatile u32*)(0x47C+BASE_ADDRESS))
#define PRI32			*((volatile u32*)(0x480+BASE_ADDRESS))
#define PRI33			*((volatile u32*)(0x484+BASE_ADDRESS))
#define PRI34			*((volatile u32*)(0x488+BASE_ADDRESS))

#define INTCRTL			*((volatile u32*)(0xD04+BASE_ADDRESS))

#define APINT			*((volatile u32*)(0xD0C+BASE_ADDRESS))



#endif
/*******************************************************************************************/
/***************************	Author :  Abdelrahman Elnahas ******************************/
/****************************	SWC    :  GPIO	 			  ******************************/
/****************************	Layer  :  MCAL 				  ******************************/
/****************************	MCU    :  TM4C123GH6PM	      ******************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/* Register defination */

/* DATA REGISTERS */
#define GPIOA_DATA_ABP					*((volatile u32*)(0x40004000+0x3fc))
#define GPIOA_DATA_AHB					*((volatile u32*)(0x40058000+0x3fc))
																														 
#define GPIOB_DATA_ABP					*((volatile u32*)(0x40005000+0x3fc))
#define GPIOB_DATA_AHB					*((volatile u32*)(0x40059000+0x3fc))
																														 
#define GPIOC_DATA_ABP					*((volatile u32*)(0x40006000+0x3fc))
#define GPIOC_DATA_AHB					*((volatile u32*)(0x4005A000+0x3fc))
																														 
#define GPIOD_DATA_ABP					*((volatile u32*)(0x40007000+0x3fc))
#define GPIOD_DATA_AHB					*((volatile u32*)(0x4005B000+0x3fc))
																														 
#define GPIOE_DATA_ABP					*((volatile u32*)(0x40024000+0x3fc))
#define GPIOE_DATA_AHB					*((volatile u32*)(0x4005C000+0x3fc))
																														 
#define GPIOF_DATA_ABP					*((volatile u32*)(0x40025000+0x3fc))
#define GPIOF_DATA_AHB					*((volatile u32*)(0x4005D000+0x3fc))


/* DIRECTION REGISTERS */
#define GPIOA_DIR_ABP					*((volatile u32*)(0x40004000+0x400))
#define GPIOA_DIR_AHB					*((volatile u32*)(0x40058000+0x400))

#define GPIOB_DIR_ABP					*((volatile u32*)(0x40005000+0x400))
#define GPIOB_DIR_AHB					*((volatile u32*)(0x40059000+0x400))

#define GPIOC_DIR_ABP					*((volatile u32*)(0x40006000+0x400))
#define GPIOC_DIR_AHB					*((volatile u32*)(0x4005A000+0x400))

#define GPIOD_DIR_ABP					*((volatile u32*)(0x40007000+0x400))
#define GPIOD_DIR_AHB					*((volatile u32*)(0x4005B000+0x400))

#define GPIOE_DIR_ABP					*((volatile u32*)(0x40024000+0x400))
#define GPIOE_DIR_AHB					*((volatile u32*)(0x4005C000+0x400))

#define GPIOF_DIR_ABP					*((volatile u32*)(0x40025000+0x400))
#define GPIOF_DIR_AHB					*((volatile u32*)(0x4005D000+0x400))



/* GPIO Alternate Function Select  Registers */ 
#define GPIOA_GPIOAFSEL_ABP					*((volatile u32*)(0x40004000+0x420))
#define GPIOA_GPIOAFSEL_AHB					*((volatile u32*)(0x40058000+0x420))
																		 
#define GPIOB_GPIOAFSEL_ABP					*((volatile u32*)(0x40005000+0x420))
#define GPIOB_GPIOAFSEL_AHB					*((volatile u32*)(0x40059000+0x420))
																		 
#define GPIOC_GPIOAFSEL_ABP					*((volatile u32*)(0x40006000+0x420))
#define GPIOC_GPIOAFSEL_AHB					*((volatile u32*)(0x4005A000+0x420))
																		 
#define GPIOD_GPIOAFSEL_ABP					*((volatile u32*)(0x40007000+0x420))
#define GPIOD_GPIOAFSEL_AHB					*((volatile u32*)(0x4005B000+0x420))
																		 
#define GPIOE_GPIOAFSEL_ABP					*((volatile u32*)(0x40024000+0x420))
#define GPIOE_GPIOAFSEL_AHB					*((volatile u32*)(0x4005C000+0x420))
																		 
#define GPIOF_GPIOAFSEL_ABP					*((volatile u32*)(0x40025000+0x420))
#define GPIOF_GPIOAFSEL_AHB					*((volatile u32*)(0x4005D000+0x420))



/* GPIO 2-mA Drive Select */
#define GPIOA_GPIODR2R_ABP					*((volatile u32*)(0x40004000+0x500))
#define GPIOA_GPIODR2R_AHB					*((volatile u32*)(0x40058000+0x500))
																		 
#define GPIOB_GPIODR2R_ABP					*((volatile u32*)(0x40005000+0x500))
#define GPIOB_GPIODR2R_AHB					*((volatile u32*)(0x40059000+0x500))
																		 
#define GPIOC_GPIODR2R_ABP					*((volatile u32*)(0x40006000+0x500))
#define GPIOC_GPIODR2R_AHB					*((volatile u32*)(0x4005A000+0x500))
																		 
#define GPIOD_GPIODR2R_ABP					*((volatile u32*)(0x40007000+0x500))
#define GPIOD_GPIODR2R_AHB					*((volatile u32*)(0x4005B000+0x500))
																		 
#define GPIOE_GPIODR2R_ABP					*((volatile u32*)(0x40024000+0x500))
#define GPIOE_GPIODR2R_AHB					*((volatile u32*)(0x4005C000+0x500))
																		 
#define GPIOF_GPIODR2R_ABP					*((volatile u32*)(0x40025000+0x500))
#define GPIOF_GPIODR2R_AHB					*((volatile u32*)(0x4005D000+0x500))



/* GPIO 4-mA Drive Select */
#define GPIOA_GPIODR4R_ABP					*((volatile u32*)(0x40004000+0x504))
#define GPIOA_GPIODR4R_AHB					*((volatile u32*)(0x40058000+0x504))
																		 
#define GPIOB_GPIODR4R_ABP					*((volatile u32*)(0x40005000+0x504))
#define GPIOB_GPIODR4R_AHB					*((volatile u32*)(0x40059000+0x504))
																		 
#define GPIOC_GPIODR4R_ABP					*((volatile u32*)(0x40006000+0x504))
#define GPIOC_GPIODR4R_AHB					*((volatile u32*)(0x4005A000+0x504))
																		 
#define GPIOD_GPIODR4R_ABP					*((volatile u32*)(0x40007000+0x504))
#define GPIOD_GPIODR4R_AHB					*((volatile u32*)(0x4005B000+0x504))
																		 
#define GPIOE_GPIODR4R_ABP					*((volatile u32*)(0x40024000+0x504))
#define GPIOE_GPIODR4R_AHB					*((volatile u32*)(0x4005C000+0x504))
																		 
#define GPIOF_GPIODR4R_ABP					*((volatile u32*)(0x40025000+0x504))
#define GPIOF_GPIODR4R_AHB					*((volatile u32*)(0x4005D000+0x504))



/* GPIO 8-mA Drive Select */
#define GPIOA_GPIODR8R_ABP					*((volatile u32*)(0x40004000+0x508))
#define GPIOA_GPIODR8R_AHB					*((volatile u32*)(0x40058000+0x508))
																		 
#define GPIOB_GPIODR8R_ABP					*((volatile u32*)(0x40005000+0x508))
#define GPIOB_GPIODR8R_AHB					*((volatile u32*)(0x40059000+0x508))
																		 
#define GPIOC_GPIODR8R_ABP					*((volatile u32*)(0x40006000+0x508))
#define GPIOC_GPIODR8R_AHB					*((volatile u32*)(0x4005A000+0x508))
																		 
#define GPIOD_GPIODR8R_ABP					*((volatile u32*)(0x40007000+0x508))
#define GPIOD_GPIODR8R_AHB					*((volatile u32*)(0x4005B000+0x508))
																		 
#define GPIOE_GPIODR8R_ABP					*((volatile u32*)(0x40024000+0x508))
#define GPIOE_GPIODR8R_AHB					*((volatile u32*)(0x4005C000+0x508))
																		 
#define GPIOF_GPIODR8R_ABP					*((volatile u32*)(0x40025000+0x508))
#define GPIOF_GPIODR8R_AHB					*((volatile u32*)(0x4005D000+0x508))



/* GPIO Open Drain Select */
#define GPIOA_GPIOODR_ABP					*((volatile u32*)(0x40004000+0x50C))
#define GPIOA_GPIOODR_AHB					*((volatile u32*)(0x40058000+0x50C))
																		 
#define GPIOB_GPIOODR_ABP					*((volatile u32*)(0x40005000+0x50C))
#define GPIOB_GPIOODR_AHB					*((volatile u32*)(0x40059000+0x50C))
																		 
#define GPIOC_GPIOODR_ABP					*((volatile u32*)(0x40006000+0x50C))
#define GPIOC_GPIOODR_AHB					*((volatile u32*)(0x4005A000+0x50C))
																		 
#define GPIOD_GPIOODR_ABP					*((volatile u32*)(0x40007000+0x50C))
#define GPIOD_GPIOODR_AHB					*((volatile u32*)(0x4005B000+0x50C))
																		 
#define GPIOE_GPIOODR_ABP					*((volatile u32*)(0x40024000+0x50C))
#define GPIOE_GPIOODR_AHB					*((volatile u32*)(0x4005C000+0x50C))
																		 
#define GPIOF_GPIOODR_ABP					*((volatile u32*)(0x40025000+0x50C))
#define GPIOF_GPIOODR_AHB					*((volatile u32*)(0x4005D000+0x50C))



/* GPIO Pull-Up Select */
#define GPIOA_GPIOPUR_ABP					*((volatile u32*)(0x40004000+0x510))
#define GPIOA_GPIOPUR_AHB					*((volatile u32*)(0x40058000+0x510))
																		 
#define GPIOB_GPIOPUR_ABP					*((volatile u32*)(0x40005000+0x510))
#define GPIOB_GPIOPUR_AHB					*((volatile u32*)(0x40059000+0x510))
																		 
#define GPIOC_GPIOPUR_ABP					*((volatile u32*)(0x40006000+0x510))
#define GPIOC_GPIOPUR_AHB					*((volatile u32*)(0x4005A000+0x510))
																		 
#define GPIOD_GPIOPUR_ABP					*((volatile u32*)(0x40007000+0x510))
#define GPIOD_GPIOPUR_AHB					*((volatile u32*)(0x4005B000+0x510))
																		 
#define GPIOE_GPIOPUR_ABP					*((volatile u32*)(0x40024000+0x510))
#define GPIOE_GPIOPUR_AHB					*((volatile u32*)(0x4005C000+0x510))
																		 
#define GPIOF_GPIOPUR_ABP					*((volatile u32*)(0x40025000+0x510))
#define GPIOF_GPIOPUR_AHB					*((volatile u32*)(0x4005D000+0x510))



/* GPIO Pull-Down Select */
#define GPIOA_GPIOPDR_ABP					*((volatile u32*)(0x40004000+0x514))
#define GPIOA_GPIOPDR_AHB					*((volatile u32*)(0x40058000+0x514))
																		 
#define GPIOB_GPIOPDR_ABP					*((volatile u32*)(0x40005000+0x514))
#define GPIOB_GPIOPDR_AHB					*((volatile u32*)(0x40059000+0x514))
																		 
#define GPIOC_GPIOPDR_ABP					*((volatile u32*)(0x40006000+0x514))
#define GPIOC_GPIOPDR_AHB					*((volatile u32*)(0x4005A000+0x514))
																		 
#define GPIOD_GPIOPDR_ABP					*((volatile u32*)(0x40007000+0x514))
#define GPIOD_GPIOPDR_AHB					*((volatile u32*)(0x4005B000+0x514))
																		 
#define GPIOE_GPIOPDR_ABP					*((volatile u32*)(0x40024000+0x514))
#define GPIOE_GPIOPDR_AHB					*((volatile u32*)(0x4005C000+0x514))
																		 
#define GPIOF_GPIOPDR_ABP					*((volatile u32*)(0x40025000+0x514))
#define GPIOF_GPIOPDR_AHB					*((volatile u32*)(0x4005D000+0x514))



/* GPIO Digital Enable */
#define GPIOA_GPIODEN_ABP					*((volatile u32*)(0x40004000+0x51C))
#define GPIOA_GPIODEN_AHB					*((volatile u32*)(0x40058000+0x51C))
																		 
#define GPIOB_GPIODEN_ABP					*((volatile u32*)(0x40005000+0x51C))
#define GPIOB_GPIODEN_AHB					*((volatile u32*)(0x40059000+0x51C))
																		 
#define GPIOC_GPIODEN_ABP					*((volatile u32*)(0x40006000+0x51C))
#define GPIOC_GPIODEN_AHB					*((volatile u32*)(0x4005A000+0x51C))
																		 
#define GPIOD_GPIODEN_ABP					*((volatile u32*)(0x40007000+0x51C))
#define GPIOD_GPIODEN_AHB					*((volatile u32*)(0x4005B000+0x51C))
																		 
#define GPIOE_GPIODEN_ABP					*((volatile u32*)(0x40024000+0x51C))
#define GPIOE_GPIODEN_AHB					*((volatile u32*)(0x4005C000+0x51C))
																		 
#define GPIOF_GPIODEN_ABP					*((volatile u32*)(0x40025000+0x51C))
#define GPIOF_GPIODEN_AHB					*((volatile u32*)(0x4005D000+0x51C))



/* GPIO Lock */
#define GPIOA_GPIOLOCK_ABP					*((volatile u32*)(0x40004000+0x520))
#define GPIOA_GPIOLOCK_AHB					*((volatile u32*)(0x40058000+0x520))
																		 
#define GPIOB_GPIOLOCK_ABP					*((volatile u32*)(0x40005000+0x520))
#define GPIOB_GPIOLOCK_AHB					*((volatile u32*)(0x40059000+0x520))
																		 
#define GPIOC_GPIOLOCK_ABP					*((volatile u32*)(0x40006000+0x520))
#define GPIOC_GPIOLOCK_AHB					*((volatile u32*)(0x4005A000+0x520))
																		 
#define GPIOD_GPIOLOCK_ABP					*((volatile u32*)(0x40007000+0x520))
#define GPIOD_GPIOLOCK_AHB					*((volatile u32*)(0x4005B000+0x520))
																		 
#define GPIOE_GPIOLOCK_ABP					*((volatile u32*)(0x40024000+0x520))
#define GPIOE_GPIOLOCK_AHB					*((volatile u32*)(0x4005C000+0x520))
																		 
#define GPIOF_GPIOLOCK_ABP					*((volatile u32*)(0x40025000+0x520))
#define GPIOF_GPIOLOCK_AHB					*((volatile u32*)(0x4005D000+0x520))



/* GPIO Commit */
#define GPIOA_GPIOCR_ABP					*((volatile u32*)(0x40004000+0x524))
#define GPIOA_GPIOCR_AHB					*((volatile u32*)(0x40058000+0x524))
																		 
#define GPIOB_GPIOCR_ABP					*((volatile u32*)(0x40005000+0x524))
#define GPIOB_GPIOCR_AHB					*((volatile u32*)(0x40059000+0x524))
																		 
#define GPIOC_GPIOCR_ABP					*((volatile u32*)(0x40006000+0x524))
#define GPIOC_GPIOCR_AHB					*((volatile u32*)(0x4005A000+0x524))
																		 
#define GPIOD_GPIOCR_ABP					*((volatile u32*)(0x40007000+0x524))
#define GPIOD_GPIOCR_AHB					*((volatile u32*)(0x4005B000+0x524))
																		 
#define GPIOE_GPIOCR_ABP					*((volatile u32*)(0x40024000+0x524))
#define GPIOE_GPIOCR_AHB					*((volatile u32*)(0x4005C000+0x524))
																		 
#define GPIOF_GPIOCR_ABP					*((volatile u32*)(0x40025000+0x524))
#define GPIOF_GPIOCR_AHB					*((volatile u32*)(0x4005D000+0x524))



/* GPIO Analog Mode Select */
#define GPIOA_GPIOAMSEL_ABP					*((volatile u32*)(0x40004000+0x528))
#define GPIOA_GPIOAMSEL_AHB					*((volatile u32*)(0x40058000+0x528))
																		 
#define GPIOB_GPIOAMSEL_ABP					*((volatile u32*)(0x40005000+0x528))
#define GPIOB_GPIOAMSEL_AHB					*((volatile u32*)(0x40059000+0x528))
																		 
#define GPIOC_GPIOAMSEL_ABP					*((volatile u32*)(0x40006000+0x528))
#define GPIOC_GPIOAMSEL_AHB					*((volatile u32*)(0x4005A000+0x528))
																		 
#define GPIOD_GPIOAMSEL_ABP					*((volatile u32*)(0x40007000+0x528))
#define GPIOD_GPIOAMSEL_AHB					*((volatile u32*)(0x4005B000+0x528))
																		 
#define GPIOE_GPIOAMSEL_ABP					*((volatile u32*)(0x40024000+0x528))
#define GPIOE_GPIOAMSEL_AHB					*((volatile u32*)(0x4005C000+0x528))
																		 
#define GPIOF_GPIOAMSEL_ABP					*((volatile u32*)(0x40025000+0x528))
#define GPIOF_GPIOAMSEL_AHB					*((volatile u32*)(0x4005D000+0x528))



/* GPIO Port Control*/
#define GPIOA_GPIOPCTL_ABP					*((volatile u32*)(0x40004000+0x52C))
#define GPIOA_GPIOPCTL_AHB					*((volatile u32*)(0x40058000+0x52C))
																		 
#define GPIOB_GPIOPCTL_ABP					*((volatile u32*)(0x40005000+0x52C))
#define GPIOB_GPIOPCTL_AHB					*((volatile u32*)(0x40059000+0x52C))
																		 
#define GPIOC_GPIOPCTL_ABP					*((volatile u32*)(0x40006000+0x52C))
#define GPIOC_GPIOPCTL_AHB					*((volatile u32*)(0x4005A000+0x52C))
																		 
#define GPIOD_GPIOPCTL_ABP					*((volatile u32*)(0x40007000+0x52C))
#define GPIOD_GPIOPCTL_AHB					*((volatile u32*)(0x4005B000+0x52C))
																		 
#define GPIOE_GPIOPCTL_ABP					*((volatile u32*)(0x40024000+0x52C))
#define GPIOE_GPIOPCTL_AHB					*((volatile u32*)(0x4005C000+0x52C))
																		 
#define GPIOF_GPIOPCTL_ABP					*((volatile u32*)(0x40025000+0x52C))
#define GPIOF_GPIOPCTL_AHB					*((volatile u32*)(0x4005D000+0x52C))


/*************************************************************************************************/
/*************************************************************************************************/
/*************************************************************************************************/
/*************************************************************************************************/
/*************************************************************************************************/


		/**********************			PRIVATE DEFINATIONS 		************************/





/*GPIO LOCK KEY */
#define GPIOLOCK_KEY 						0x4C4F434B 

/*************************************************************************************************/
/*************************************************************************************************/
/*************************************************************************************************/


#endif

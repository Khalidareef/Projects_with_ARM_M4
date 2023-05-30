/*****************************************************************************************
 * Author:		        Khalid A. Mohamad
 * Creation Data:		30 May, 2023
 * Version:			    v1.0
 * Compiler:	        GNU ARM-GCC
 * Controller:	        STM32F401CCU6 (32-bit Architecture)
 * Processor:	        Cortex M4 (32-bit Architecture)
 * Layer:			    HAL Layer
 *****************************************************************************************/
/*****************************************************************************************
 * Version	  Date				  Author				  Description
 * v1.0		  30 May, 2023	      Khalid A. Mohamad		  Initial Creation
 *****************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"
#include "EXTI_interface.h"
#include "STK_interface.h"

#include "IR_interface.h"


void main(void)
{
	IR_voidInit();

	while(1)
	{
		IR_voidPlay();
	}

}
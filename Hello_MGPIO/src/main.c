/*****************************************************************************************
 * Author:				Khalid A. Mohamad
 * Creation Data:		01 May, 2023
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6 (32-bit Architecture)
 * Processor:			Cortex M4 (32-bit Architecture)
 * Layer:				MCAL Layer
 *****************************************************************************************/
/*****************************************************************************************
 * Version	  Date				  Author				  Description
 * v2.0		  26 May, 2023	Khalid A. Mohamad		  Initial Creation
 *****************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

void main (void)
{
	u8 Value = 0;
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1, RCC_GPIOA);

	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN1, MGPIO_OUTPUT_MODE);
	//MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN1, 0);
	MGPIO_voidSetPinValue(MGPIO_PORTA, PIN1, MGPIO_OUTPUT_HIGH);
	//Value = MGPIO_voidGetPinValue(MGPIO_PORTA, PIN1);
	while(1)
	{

	}


}

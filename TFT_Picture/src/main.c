/*****************************************************************************************
 * Author:				Khalid A. Mohamad
 * Creation Data:		04 Jun, 2023
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6 (32-bit Architecture)
 * Processor:			Cortex M4 (32-bit Architecture)
 * Layer:				APP Layer
 *****************************************************************************************/
/*****************************************************************************************
 * Version	  Date				  Author				  Description
 * v1.0		  04 Jun, 2023	Khalid A. Mohamad		  Initial Creation
 *****************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "SPI_interface.h"
#include "TFT_interface.h"
#include "Imag.h"


void main (void)
{
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1, RCC_GPIOA);
	MRCC_voidEnablePeripheralClock(RCC_APB2, RCC_SPI1);
	MSTK_voidInit();
	MSPI1_voidInit();

	HTFT_voidInit();
	HTFT_voidDisplayImage(Image);


	while(1)
	{

	}
}

















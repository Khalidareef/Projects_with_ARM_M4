/*****************************************************************************************
 * Author:				Khalid A. Mohamad
 * Creation Data:		12 May, 2023
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6 (32-bit Architecture)
 * Processor:			Cortex M4 (32-bit Architecture)
 * Layer:				MCAL Layer
 *****************************************************************************************/
/*****************************************************************************************
 * Version	  Date				  Author				  Description
 * v1.0		  12 May, 2023	Khalid A. Mohamad		  Initial Creation
 *****************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "7Seg_interface.h"



void main(void)
{
	//u16 PINS_1[7] = {0,1,2,3,4,5,6};
	//u16 PINS_2[7] = {7,8,9,10,11,12,13};

	SSG_t SSG1 = {MGPIO_PORTA, {0,1,2,3,4,5,6}};
	SSG_t SSG2 = {MGPIO_PORTA,{7,8,9,10,11,12,13}};

	MSTK_voidInit();
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1,RCC_GPIOA);
	SSG_voidInit(&SSG1);
	SSG_voidInit(&SSG2);
	while(1)
	{
		//SSG_voidSendNumber(&SSG1,2,COM_CATHOD);

		for(u8 i =0; i<=1; i++)
		{
			u8 j;

			SSG_voidSendNumber(&SSG2,i,COM_CATHOD);
			MSTK_voidSetBusyWait(1000000);
			if(i == 1)
			{
				break;
			}

			for(j =0; j<=9; j++)
			{
				SSG_voidSendNumber(&SSG1,j,COM_CATHOD);
				MSTK_voidSetBusyWait(1000000);
			}
			SSG_voidSendNumber(&SSG1,0,COM_CATHOD);
		}

	}
}



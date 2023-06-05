
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"

#include "STP_interface.h"

void main(void)
{
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1, RCC_GPIOA);

	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN0, MGPIO_OUTPUT_MODE);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN0, MGPIO_LOW_SPEED);
	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN1, MGPIO_OUTPUT_MODE);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN1, MGPIO_LOW_SPEED);
	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN2, MGPIO_OUTPUT_MODE);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN2, MGPIO_LOW_SPEED);

	MSTK_voidInit();

	u16 Arr_u8OfNum[16] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};

	u8 i = 0;

	while(1)
	{

		for(i=0; i <= 15; i++)
		{

			STP_voidSendData(Arr_u8OfNum[i]);
			MSTK_voidSetBusyWait(1000000);

		}
	}
}


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "STK_interface.h"

#include "STP_interface.h"
#include "STP_private.h"
#include "STP_config.h"

void STP_voidSendSynch(u16 Copy_u16Data)
{
	s8 Local_s8Counter = 0;
	u8 Local_u8Bit = 0;

	for(Local_s8Counter = 7; Local_s8Counter >= 0; Local_s8Counter--)
	{
		Local_u8Bit = GET_BIT(Copy_u16Data, Local_s8Counter);

		MGPIO_voidSetPinValue(STP_SERIAL_DATA, Local_u8Bit);

		MGPIO_voidSetPinValue(STP_SHIFT_CLK, MGPIO_OUTPUT_HIGH);
		MSTK_voidSetBusyWait(1);
		MGPIO_voidSetPinValue(STP_SHIFT_CLK, MGPIO_OUTPUT_LOW);
		MSTK_voidSetBusyWait(1);

	}

	MGPIO_voidSetPinValue(STP_STORE_CLK, MGPIO_OUTPUT_HIGH);
	MSTK_voidSetBusyWait(1);
	MGPIO_voidSetPinValue(STP_STORE_CLK, MGPIO_OUTPUT_LOW);
	MSTK_voidSetBusyWait(1);

}

void STP_voidSendData(u16 Copy_u16Data)
{
	s8 Local_s8Counter = 0;
	u8 Local_u8Bit = 0;

	for(Local_s8Counter = 15; Local_s8Counter >= 0; Local_s8Counter--)
	{
		Local_u8Bit = GET_BIT(Copy_u16Data, Local_s8Counter);

		MGPIO_voidSetPinValue(STP_SERIAL_DATA, Local_u8Bit);

		MGPIO_voidSetPinValue(STP_SHIFT_CLK, MGPIO_OUTPUT_HIGH);
		MSTK_voidSetBusyWait(1);
		MGPIO_voidSetPinValue(STP_SHIFT_CLK, MGPIO_OUTPUT_LOW);
		MSTK_voidSetBusyWait(1);
	}
	MGPIO_voidSetPinValue(STP_STORE_CLK, MGPIO_OUTPUT_HIGH);
	MSTK_voidSetBusyWait(1);
	MGPIO_voidSetPinValue(STP_STORE_CLK, MGPIO_OUTPUT_LOW);
	MSTK_voidSetBusyWait(1);
}


















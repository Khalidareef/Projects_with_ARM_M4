#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "LMX_interface.h"

void main(void)
{
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1, MGPIO_PORTA);
	MRCC_voidEnablePeripheralClock(RCC_AHB1, MGPIO_PORTB);
	HLEDMAT_voidInit();

	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN0, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN1, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN2, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN3, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN4, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN5, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN6, 0b00);
	MGPIO_voidSetPinOutputType(MGPIO_PORTA,  PIN7, 0b00);

	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN0, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN1, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN2, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN3, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN4, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN5, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN6, 0b00);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTB, PIN7, 0b00);
	MSTK_voidInit();


	u8 Local_u8Data[] = {0,50,70,20,30,80,10,90};


	while(1)
	{
		HLEDMAT_voidDisplay(Local_u8Data);
	}
}

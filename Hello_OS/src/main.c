
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include"RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"

#include "OS_interface.h"

void LED1 (void);
void LED2 (void);
void LED3 (void);

void main (void)
{
	MRCC_voidInit();
	MRCC_voidEnablePeripheralClock(RCC_AHB1, RCC_GPIOA);

	OS_voidCreatTask(0, 1000, LED1);
	OS_voidCreatTask(1, 2000, LED2);
	OS_voidCreatTask(2, 3000, LED3);

	OS_voidStart();

	while(1)
	{

	}
}

void LED1 (void)
{
	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN0, MGPIO_OUTPUT);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN0, MGPIO_LOW_SPEED);
	static u8 Local_u8Pin0 = 0;
	TOG_BIT(Local_u8Pin0, 0);
	MGPIO_voidSetPinValue(MGPIO_PORTA, PIN0, Local_u8Pin0);
}
void LED2 (void)
{
	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN1, MGPIO_OUTPUT);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN1, MGPIO_LOW_SPEED);
	static u8 Local_u8Pin1 = 0;
	TOG_BIT(Local_u8Pin1, 0);
	MGPIO_voidSetPinValue(MGPIO_PORTA, PIN1, Local_u8Pin1);
}
void LED3 (void)
{
	MGPIO_voidSetPinMode(MGPIO_PORTA, PIN2, MGPIO_OUTPUT);
	MGPIO_voidSetPinOutputSpeed(MGPIO_PORTA, PIN2, MGPIO_LOW_SPEED);
	static u8 Local_u8Pin2 = 0;
	TOG_BIT(Local_u8Pin2, 0);
	MGPIO_voidSetPinValue(MGPIO_PORTA, PIN2, Local_u8Pin2);
}












#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"

#include "OS_interface.h"
#include "OS_private.h"
#include "OS_config.h"

#define NULL     0
/*Array of Tasks: of Srtuct*/
static Task OS_Tasks[NUM_OF_TASKS] = {NULL};

void OS_voidCreatTask(u8 Copy_u8ID, u16 copy_u16Priodicity, void (*Ptr) (void))
{
    OS_Tasks[Copy_u8ID].Priodicity = copy_u16Priodicity;
    OS_Tasks[Copy_u8ID].Fptr = Ptr;
}

void OS_voidStart(void)
{
	MSTK_voidInit();
    /*Tick Time -> 1000 Micro Sec -> 1m Sec*/
	MSTK_voidSetPeriodicInterval(6000, Scheduler);

}

volatile u16 TickCounts = 0;

void Scheduler(void)
{

    for(u8 i = 0; i < NUM_OF_TASKS; i++)
    {
        if((TickCounts % OS_Tasks[i].Priodicity) == 0)
        {
            OS_Tasks[i].Fptr();
        }

    }
    TickCounts++;
}

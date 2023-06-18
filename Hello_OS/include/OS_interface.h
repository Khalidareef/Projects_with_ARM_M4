#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H




void OS_voidCreatTask(u8 Copy_u8ID, u16 copy_u16Priodicity, void (*Ptr) (void));
void OS_voidStart(void);
void Scheduler(void);

#endif

#ifndef OS_PRIVATE_H
#define OS_PRIVATE_H

typedef struct 
{
    u16 Priodicity;
    void (*Fptr) (void);
}Task;

#endif
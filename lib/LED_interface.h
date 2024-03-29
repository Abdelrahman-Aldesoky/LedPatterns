/*****************LED Interface******************/
/**********Author: Abdelrahman Mohamed.**********/
/********************Ver.: 01********************/
/****************Date:17/08/2023.****************/
/************************************************/

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define MAX_PATTERN_LENGTH 10
/*Struct for my patterns it contains array for the pattern and its corrsponding delay*/
typedef struct
{
    u16 delay;
    s16 pattern[MAX_PATTERN_LENGTH];
} LedPattern;

void LED_voidInit(void);
void LED_voidCheckState(void);
void LED_voidActivatePattern(void);

#endif
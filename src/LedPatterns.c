/*
 * main.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Abdelrahman Mohamed
 */
#include "../inc/STD_TYPES.h"
#include "../inc/BIT_MATH.h"
#include "../lib/LED_interface.h"
#include "../lib/USART_interface.h"

int main(void)
{
	u8 Local_u8ErrorState = OK;

	/*Initialize USART for interrupts initialize my LED port */
	USART_voidInit();
	LED_voidInit();
	/*set my call back function usart intterupt it just checks what number is being recieved from usart
	and then sets the led pattern index i got array of structs for the patterns*/
	USART_voidSetCallBack(LED_voidCheckState);

	while (1)
	{
		/*pattern animation function*/
		LED_voidActivatePattern();
	}
	return 0;
}

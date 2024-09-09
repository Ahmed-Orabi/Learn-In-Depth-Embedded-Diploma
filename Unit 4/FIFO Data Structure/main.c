/*
 * main.c
 *
 *  Created on: 9 Sep 2024
 *      Author: Ahmed Orabi
 */
#include "FIFO.h"

ELEMENT_TYPE uart_buffer[WIDTH];

int main(void)
{
	FIFO_Buf_t FIFO_UART;
	ELEMENT_TYPE i, temp = 0;

	if(FIFO_Init(&FIFO_UART, uart_buffer, WIDTH) == FIFO_No_Error)
		printf("FIFO Initialization is Done \n");

	for(i = 0; i < 7; i++)
	{
		printf("FIFO Enqueue (%x) \n", i);

		if(FIFO_Enqueue(&FIFO_UART, &i) == FIFO_No_Error)
			printf("\t FIFO Enqueue (%x) is Done \n", i);
		else
			printf("\t FIFO Enqueue (%x) is Failed \n", i);
	}

	FIFO_Print(&FIFO_UART);

	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_No_Error)
		printf("FIFO Dequeue %x is Done \n", temp);
	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_No_Error)
		printf("FIFO Dequeue %x is Done \n", temp);

	for(i = 0; i < 2; i++)
	{
		printf("FIFO Enqueue (%x) \n", i);

		if(FIFO_Enqueue(&FIFO_UART, &i) == FIFO_No_Error)
			printf("\t FIFO Enqueue (%x) is Done \n", i);
		else
			printf("\t FIFO Enqueue (%x) is Failed \n", i);
	}
	FIFO_Print(&FIFO_UART);
	return 0;
}


/*
 * data.c
 *
 *  Created on: 8 Sep 2024
 *      Author: Ahmed Orabi
 */
#include "LIFO.h"

unsigned int buffer1[5];

int main(void)
{
	int i, temp = 0;
    LIFO_Buf_t uart_lifo, I2C_lifo;

    // static allocation
    LIFO_Init(&uart_lifo, buffer1, 5);

    // dynamic allocation
    unsigned int* buffer2 = (unsigned int*) malloc(5 * sizeof(unsigned int));
    LIFO_Init(&I2C_lifo, buffer2, 5);

    for(i = 0; i < 5; i++)
    {
    	if(LIFO_Add_Item(&uart_lifo, i) == LIFO_No_Error)
    		printf("UART_LIFO add : %d \n", i);
    }

    printf("\n");

    for(i = 0; i < 5; i++)
    {
    	if(LIFO_Get_Item(&uart_lifo, &temp) == LIFO_No_Error)
    		printf("UART_LIFO get : %d \n", temp);
    }

	return 0;
}

/*
 * FIFO.c
 *
 *  Created on: 9 Sep 2024
 *      Author: Ahmed Orabi
 */
#include "FIFO.h"

// FIFO APIs

// Initialization of Queue
FIFO_Buf_Status FIFO_Init(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* buf, unsigned int length)
{
	// Check Buffer Address
	if(buf == NULL)
		return FIFO_Null;

	// FIFO Initialization
	(fifo_buf -> base) = buf;
	(fifo_buf -> head) = buf;
	(fifo_buf -> tail) = buf;

	(fifo_buf -> count) = 0;
	(fifo_buf -> length) = length;
	return FIFO_No_Error;
}

// Add New Item into Queue
FIFO_Buf_Status FIFO_Enqueue(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* item)
{
	// Check FIFO Addresses
	if(!(fifo_buf -> base) || !(fifo_buf -> head) || !(fifo_buf -> tail))
		return FIFO_Null;

	// Check FIFO is Full
	if(FIFO_Is_Full(fifo_buf) == FIFO_Full)
	return FIFO_Full;

	*(fifo_buf->head) = *item;

	// Check Circular of FIFO
	if(fifo_buf->head == (fifo_buf->base + fifo_buf->length * sizeof(ELEMENT_TYPE)))
		(fifo_buf->head) = (fifo_buf->base);
	else
		(fifo_buf -> head)++;

	(fifo_buf -> count)++;

	return FIFO_No_Error;
}

// Get an item form Queue
FIFO_Buf_Status FIFO_Dequeue(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* item)
{
	// Check FIFO Addresses
	if(!(fifo_buf -> base) || !(fifo_buf -> head) || !(fifo_buf -> tail))
		return FIFO_Null;

	// Check FIFO is Empty
	if(fifo_buf->count == 0)
		return FIFO_Empty;

	*item = *(fifo_buf -> tail);
	fifo_buf -> count--;

	// Check Circular of FIFO
	if(fifo_buf->tail == (fifo_buf->base + fifo_buf->length * sizeof(ELEMENT_TYPE)))
		(fifo_buf -> tail) = (fifo_buf -> base);
	else
		(fifo_buf -> tail)++;

	return FIFO_No_Error;
}

// Check if Queue is Full or Not
FIFO_Buf_Status FIFO_Is_Full(FIFO_Buf_t* fifo_buf)
{
	// Check FIFO Addresses
	if(!(fifo_buf -> base) || !(fifo_buf -> head) || !(fifo_buf -> tail))
		return FIFO_Null;

	// Check FIFO is Full
	if((fifo_buf -> count) == (fifo_buf -> length))
		return FIFO_Full;
	else
		return FIFO_No_Error;
}

// Print Content of Queue
void FIFO_Print(FIFO_Buf_t* fifo_buf)
{
	ELEMENT_TYPE* temp;
	int i;

	if(fifo_buf -> count == 0)
	{
		printf("FIFO is Empty \n");
	}else{
		temp = fifo_buf -> tail;
		printf("========== FIFO Information: ==========\n");
		for(i = 0; i < fifo_buf -> count; i++)
		{
			printf("\t %x \n", *temp);
			temp++;
		}
		printf("========================================\n");
	}
}

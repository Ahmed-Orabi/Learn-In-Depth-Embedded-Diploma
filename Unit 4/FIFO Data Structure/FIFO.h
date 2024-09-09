/*
 * FIFO.h
 *
 *  Created on: 9 Sep 2024
 *      Author: Ahmed Orabi
 */
#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

/*
 * User Configuration:
 * Select the element type (unit8_t, unit16_t, uint32_t, ...)
 */
#define ELEMENT_TYPE uint8_t

// Create Buffer and Select Width
#define WIDTH 5


// FIFO Data Types
typedef struct {
	unsigned int length;
	unsigned int count;
	ELEMENT_TYPE* base;
	ELEMENT_TYPE* head;
	ELEMENT_TYPE* tail;
}FIFO_Buf_t;

// FIFO Error Types
typedef enum {
	FIFO_No_Error,// => 0
	FIFO_Full,    // => 1
	FIFO_Empty,   // => 2
	FIFO_Null     // => 3
}FIFO_Buf_Status;

// FIFO APIs
FIFO_Buf_Status FIFO_Init(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* buf, unsigned int length);
FIFO_Buf_Status FIFO_Enqueue(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* item);
FIFO_Buf_Status FIFO_Dequeue(FIFO_Buf_t* fifo_buf, ELEMENT_TYPE* item);
FIFO_Buf_Status FIFO_Is_Full(FIFO_Buf_t* fifo_buf);
void FIFO_Print(FIFO_Buf_t* fifo_buf);

#endif /* FIFO_H_ */

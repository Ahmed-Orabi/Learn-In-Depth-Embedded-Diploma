/*
 * LIFO.h
 *
 *  Created on: 8 Sep 2024
 *      Author: Ahmed Orabi
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"

//type definition for LIFO Buffer
typedef struct LIFO_Buf{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;

// type definition for types of error
typedef enum {
	LIFO_No_Error,// => 0
	LIFO_Full,    // => 1
	LIFO_Empty,   // => 2
	LIFO_Null     // => 3
}LIFO_status_t;

//APIs

// Add Item into LIFO
LIFO_status_t LIFO_Add_Item(LIFO_Buf_t* lifo_buf, unsigned int item);

// Get item from LIFO
LIFO_status_t LIFO_Get_Item(LIFO_Buf_t* lifo_buf, unsigned int* item);

// Initialization of LIFO
LIFO_status_t LIFO_Init(LIFO_Buf_t* lifo_buf, unsigned int* buf, unsigned int length);

#endif /* LIFO_H_ */

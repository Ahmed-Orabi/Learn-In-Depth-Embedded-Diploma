/*
 * LIFO.c
 *
 *  Created on: 8 Sep 2024
 *      Author: Ahmed Orabi
 */
#include "LIFO.h"

//APIs

LIFO_status_t LIFO_Add_Item(LIFO_Buf_t* lifo_buf, unsigned int item)
{
	// Check LIFO is valid
	if(!(lifo_buf -> base) || !(lifo_buf -> head))
		return LIFO_Null;

	// Check LIFO if Full
	if((lifo_buf -> count) == (lifo_buf -> length))
		return LIFO_Full;

	// Add value into LIFO
	*(lifo_buf -> head) = item;
	(lifo_buf -> head)++;
	(lifo_buf -> count)++;
    return LIFO_No_Error;
}

LIFO_status_t LIFO_Get_Item(LIFO_Buf_t* lifo_buf, unsigned int* item)
{
	// Check LIFO is valid
		if(!(lifo_buf -> base) || !(lifo_buf -> head))
			return LIFO_Null;

	// Check LIFO is Empty
	    if(lifo_buf -> count == 0)
	    	return LIFO_Empty;

	// Get Item from LIFO
	    (lifo_buf -> head)--;
	    *item = *(lifo_buf -> head);
	    (lifo_buf -> count)--;
	return LIFO_No_Error;

}

LIFO_status_t LIFO_Init(LIFO_Buf_t* lifo_buf, unsigned int* buf, unsigned int length)
{
	 if(buf == NULL)
		 return LIFO_Null;

     lifo_buf -> base = buf;
     lifo_buf -> head = buf;
     lifo_buf -> length = length;
     lifo_buf -> count = 0;

     return LIFO_No_Error;
}

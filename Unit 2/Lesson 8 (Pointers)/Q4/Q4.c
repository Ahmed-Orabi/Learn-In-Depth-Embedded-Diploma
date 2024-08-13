/*
 * C Program to print the elements
 * of an array in reverse order
 */

#include <stdio.h>

int main() {
	int *ptr, size, i;
	int elements[15];
	ptr = elements;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d", &size);
	printf("Input %d number of elements in the array : \n", size);
	for(i = 0; i < size; i++)
	{
		printf("element - %d: ",i+1);
		fflush(stdout);
		scanf("%d",&elements[i]);
	}
	for(i = 0; i < size/2; i++)
	{
		int temp;
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + (size-1) - i);
		*(ptr + (size-1) - i) = temp;
	}
	printf("\nThe elements of array in reverse order are : \n\n");

	for(i = 0; i < size; i++)
	{
		printf("element - %d: %d \n",i+1,elements[i]);
	}
	return 0;
}

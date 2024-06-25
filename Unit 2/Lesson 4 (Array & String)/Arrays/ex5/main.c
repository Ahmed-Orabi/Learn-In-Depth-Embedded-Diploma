#include <stdio.h>
/*
  C Program to Search element in Array
*/
int elements[100];
int counter = 0;
int NumOfElements,search;
int main()
{
    printf("Enter no of elements : ");
    scanf("%i",&NumOfElements);
    printf("\n");
    for(counter = 0; counter<NumOfElements; counter++)
    {
        scanf("%i",&elements[counter]);
    }
    printf("\n\nEnter the element to be searched : ");
    scanf("%i",&search);
    for(counter = 0; counter<NumOfElements; counter++)
    {
        if(search == elements[counter])
        {
            printf("\nNumber found at the location = %i",(counter+1));
            break;
        }
    }
    if(counter == NumOfElements)
    {
        printf("Number %i not found :(",search);
    }
    return 0;
}

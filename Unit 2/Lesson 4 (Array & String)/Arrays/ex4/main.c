#include <stdio.h>
/*
  C Program to Insert an element in an Array
*/
int main()
{
    int elements[100];
    int NumLocation, counter, NumOfElements, value;

    printf("Enter no of elements : ");
    scanf("%i", &NumOfElements);

    printf("\n");
    for (counter = 0; counter < NumOfElements; counter++)
    {
        scanf("%i", &elements[counter]);
    }
    printf("\nEnter the element to be inserted : ");
    scanf("%i", &value);

    printf("\nEnter the location : ");
    scanf("%i", &NumLocation);

    for(counter = NumOfElements-1; counter >= NumLocation-1; counter--)
    {
        elements[counter + 1] = elements[counter];
    }
    elements[NumLocation - 1] = value;
    NumOfElements++;

    printf("\n");
    for (counter = 0; counter < NumOfElements; counter++)
    {
        printf("%i ", elements[counter]);
    }
    return 0;
}

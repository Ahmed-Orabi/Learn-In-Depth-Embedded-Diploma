#include <stdio.h>
/*
  C Program to Calculate Average Using Arrays
*/
unsigned int NumberOfData,counter;
float sum = 0;
float average;
int main()
{
    printf("Enter the number of data: ");
    scanf("%i",&NumberOfData);
    float numbers[NumberOfData];

    for(counter = 0; counter <(sizeof(numbers)/4); counter++)
    {
        printf("%i. Enter number: ",(counter+1));
        scanf("%f",&numbers[counter]);
    }
    for(counter = 0; counter <(sizeof(numbers)/4); counter++)
    {
        sum += numbers[counter];
    }
    average = sum/(sizeof(numbers)/4);
    printf("Average = %0.2f",average);
    return 0;
}

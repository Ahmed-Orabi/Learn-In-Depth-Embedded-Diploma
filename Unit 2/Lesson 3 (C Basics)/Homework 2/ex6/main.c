#include <stdio.h>

/*
  C Program to Calculate Sum of Natural Numbers
*/

unsigned int integer;
unsigned int sum = 0;
unsigned int counter;
int main()
{
    printf("Enter an integer: ");
    scanf("%i",&integer);

    for(counter = 1 ; counter <= integer ; counter++)
    {
        sum += counter;
    }
    printf("Sum = %i",sum);
    return 0;
}

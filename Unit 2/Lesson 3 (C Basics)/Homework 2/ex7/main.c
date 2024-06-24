#include <stdio.h>
/*
  C Program to Find Factorial of a Number
*/
int integer;
int factorial = 1;
int counter;
int main()
{
    printf("Enter an integer: ");
    scanf("%i",&integer);
    if(integer < 0)
    {
        printf("Error!!! Factorial of negative number doesn't exist.");
    }
    else if(integer == 0)
    {
        printf("Factorial = 1");
    }
    else
    {
        for(counter = 1 ; counter <= integer ; counter++)
        {
            factorial *= counter;
        }
        printf("Factorial = %i",factorial);
    }
    return 0;
}

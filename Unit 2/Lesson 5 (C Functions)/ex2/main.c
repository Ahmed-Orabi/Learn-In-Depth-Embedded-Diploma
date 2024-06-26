#include <stdio.h>
/*
 * C Program to Calculate Factorial of a Number using Recursion
 */
int factorial(int num);
int main()
{
    int number;
    printf("Enter an positive integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%i", &number);

    printf("\nFactorial of %i = %i", number, factorial(number));
    return 0;
}

int factorial(int num)
{
    unsigned long fac = 1;
    while (num != 0)
    {
        fac *= num;
        num--;
        factorial(num);
    }
    return fac;
}

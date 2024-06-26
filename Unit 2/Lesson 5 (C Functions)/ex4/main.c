#include <stdio.h>
/*
 * C program to Calculate the Power of a Number using Recursion
 */

int PowerOfNumber(int a, int b);

int main()
{
    int base, power;
    printf("Enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%i", &base);

    printf("Enter power number(positive integer): ");
    fflush(stdin);fflush(stdout);
    scanf("%i", &power);

    printf("%i^%i = %i", base, power, PowerOfNumber(base, power));
    return 0;
}
int PowerOfNumber(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * PowerOfNumber(a, b - 1);
    }
}

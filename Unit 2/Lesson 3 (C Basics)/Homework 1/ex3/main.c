#include <stdio.h>
/*
  Write C Program to Add Two Integers
*/
int num1,num2,sum;
int main()
{
    printf("Enter two integer: ");
    scanf("%i %i",&num1,&num2);
    sum = num1 + num2;
    printf("Sum: %i",sum);
    return 0;
}

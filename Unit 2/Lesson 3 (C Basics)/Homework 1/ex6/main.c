#include <stdio.h>
/*
  Write Source Code to Swap Two Numbers
*/
float a,b;
float temp;
int main()
{
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping, value of a = %0.2f\n",a);
    printf("After swapping, value of b = %0.2f",b);
    return 0;
}

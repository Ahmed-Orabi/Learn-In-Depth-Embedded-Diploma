#include <stdio.h>
/*
  Write Source Code to Swap Two Numbers without temp variable.
*/
int a,b;
int main()
{
    printf("Enter value of a: ");
    scanf("%i",&a);
    printf("Enter value of b: ");
    scanf("%i",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping, value of a = %i\n",a);
    printf("After swapping, value of b = %i",b);
    return 0;
}

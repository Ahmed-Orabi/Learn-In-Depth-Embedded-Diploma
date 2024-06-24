#include <stdio.h>
/*
  Write C Program to Multiply two Floating Point Numbers
*/
float num1,num2,result;
int main()
{
    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);
    result = num1 * num2;
    printf("Product: %f",result);
    return 0;
}

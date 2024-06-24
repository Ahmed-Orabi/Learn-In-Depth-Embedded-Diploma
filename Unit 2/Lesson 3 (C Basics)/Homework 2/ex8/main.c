#include <stdio.h>

/*
  C Program to Make a Simple Calculator to Add, Subtract, Multiply
  or Divide Using switch case
*/

char op;
float num1,num2,result;

int main()
{
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&op);

    printf("Enter two operands: ");
    scanf("%f %f",&num1,&num2);

    switch(op)
    {
    case '+':
    {
        result = num1 + num2;
        printf("%0.1f + %0.1f = %0.1f",num1,num2,result);
        break;
    }
    case '-':
    {
        result = num1 - num2;
        printf("%0.1f - %0.1f = %0.1f",num1,num2,result);
        break;
    }
    case '*':
    {
        result = num1 * num2;
        printf("%0.1f * %0.1f = %0.1f",num1,num2,result);
        break;
    }
    case '/':
    {
        result = num1 / num2;
        printf("%0.1f / %0.1f = %0.1f",num1,num2,result);
        break;
    }
    default:
    {
        printf("Invalid Operator !!");
        break;
    }
    }
    return 0;
}

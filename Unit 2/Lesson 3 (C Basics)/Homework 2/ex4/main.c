#include <stdio.h>

/*
  C Program to Check Whether a Number is Positive or Negative
*/

float number;

int main()
{
    printf("Enter a number: ");
    scanf("%f",&number);

    if(number > 0)
    {
        printf("%0.2f is positive",number);
    }
    else if(number < 0)
    {
        printf("%0.2f is negative",number);
    }
    else
    {
        printf("%You entered zero");
    }
    return 0;
}

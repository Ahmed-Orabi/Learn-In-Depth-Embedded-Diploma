#include <stdio.h>

/*
  C Program to Check Whether a Number is Even or Odd
*/

int number;

int main()
{
    printf("Enter an integer you want to check: ");
    scanf("%i",&number);

    if(number %2 == 0)
    {
        printf("%i is even",number);
    }
    else
    {
        printf("%i is odd",number);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
/*
  C Function to reverse digits in number
*/
int reverseNum(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%i",&num);
    printf("Number = %i",reverseNum(num));
    return 0;
}
int reverseNum(int num)
{
    int result = 0;
    while (num!= 0) {
        int digit = num % 10;
        result = result * 10 + digit;
        num /= 10;
    }
    return result;
}

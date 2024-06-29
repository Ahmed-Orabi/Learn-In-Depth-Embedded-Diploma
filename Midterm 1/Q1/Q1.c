#include <stdio.h>
/*
  C Function to take a number and sum all digits
*/
int sum(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%i",&num);
    printf("Summing = %i", sum(num));
    return 0;
}
int sum(int num)
{
    int result = 0,i;
    while(num != 0)
    {
        result += num%10;
        num = num /10;
    }
    return result;
}

#include <stdio.h>
#include <stdlib.h>
/*
  C Function to count the max number of ones
  between two zeros
*/
int NumOfOnes(int num);
int main()
{
    int number;
    printf("Enter number : ");
    fflush(stdout);
    scanf("%i", &number);
    printf("Max number of ones = %i",NumOfOnes(number));
    return 0;
}
int NumOfOnes(int num)
{
    int result = 0;
    while(num != 0)
    {
        num &= (num <<1);
        result++;
    }
    return result;
}

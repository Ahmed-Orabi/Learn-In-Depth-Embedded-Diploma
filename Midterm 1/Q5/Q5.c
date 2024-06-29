#include <stdio.h>
/*
  C Function to count numbers of ones in binary number
*/
int numOfOnes(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%i",&num);
    printf("Number of ones = %i", numOfOnes(num));
    return 0;
}
int numOfOnes(int num)
{
    int result = 0;
    while(num != 0)
    {

        if(num %2 == 1)
        {
            result++;
            num = num / 2;
        }else
        num = num / 2;
    }
    return result;
}


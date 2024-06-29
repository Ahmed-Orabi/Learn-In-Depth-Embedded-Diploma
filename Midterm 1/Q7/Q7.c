#include <stdio.h>
/*
  C Function to sum numbers from 1 to 100 without loop
*/
int sumNums(unsigned int num);
int main()
{
    printf("Summing = %i", sumNums(100));
    return 0;
}
int sumNums(unsigned int num)
{
    static int sum = 0;
    if(num > 0)
    {
        sum += num;
        num--;
        sumNums(num);
    }
    return sum;
}

#include <stdio.h>
#include <math.h>
/*
  C Function to take an integer number and calculate
  its square root
*/
float rootNum(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%i", &num);
    printf("Square root = %0.3f",rootNum(num));
    return 0;
}
float rootNum(int num)
{
    float result;
    result = sqrt(num);
    return result;
}

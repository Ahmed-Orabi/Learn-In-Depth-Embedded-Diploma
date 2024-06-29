#include <stdio.h>
/*
  C Function to return unique number in array with one loop
*/
char uniqueNum(int nums[], int size);
int main()
{
    int nums[] = {2,5,6,8,9,8};
    int size = sizeof(nums) / sizeof(nums[0]); // Compiler dependant
    printf("Unique Number in array is: %i", uniqueNum(nums, size));
    return 0;
}
char uniqueNum(int nums[], int size)
{
   int result = 0,i;
   for(i = 0;i < size; i++)
   {
       result ^= nums[i];
   }
    return result;
}

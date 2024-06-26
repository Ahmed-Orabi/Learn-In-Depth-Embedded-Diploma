#include <stdio.h>
/*
 * Prime Numbers between two intervals by making User-defined Function
 */

int prime(int num);
int min,max;
int main() {
    printf("Enter two numbers (intervals): ");
    fflush(stdin);fflush(stdout);
    scanf("%i %i",&min,&max);

    printf("Prime numbers between %i and %i are: ",min,max);
    prime(min);
	return 0;
}
int prime(int num)
{
	num = min;
	int counter,i,prime;
	for(counter = num;counter<=max;counter++)
	{
		prime = 0;
		for(i = 1;i<=counter;i++)
		{
			if(counter%i == 0)
			{
				prime++;
			}
		}
		if(prime == 2)
		{
			printf("%i ",counter);
		}
	}
}

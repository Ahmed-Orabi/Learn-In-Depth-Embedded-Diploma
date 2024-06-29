#include <stdio.h>
/*
  C Function to take an array and reverse its elements
*/
void reverseArray(int a[], int size);
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int size,i;
    size = sizeof(a)/sizeof(a[0]);
    reverseArray(a, size);
    for(i = 0; i < size; i++)
    {
        printf("%i ", a[i]);
    }
    return 0;
}
void reverseArray(int a[], int size)
{
    int b[100];
    int i,counter = 0;
    for(i = 0; i < size; i++)
    {
        b[counter] = a[size - 1- i];
        counter++;
    }
    for(i = 0; i < size; i++)
    {
        a[i] = b[i];
    }
}

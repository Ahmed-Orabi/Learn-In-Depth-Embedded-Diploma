#include <stdio.h>
/*
  C Program to Find the Length of a String
*/
char text[100];
int length = 0;
int main()
{
    printf("Enter a string: ");
    gets(text);
    int counter = 0;
    while(text[counter] != 0)
    {
        length++;
        counter++;
    }
    printf("\nLength of string = %i",length);
    return 0;
}

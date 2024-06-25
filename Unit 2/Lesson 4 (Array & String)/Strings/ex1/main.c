#include <stdio.h>
/*
  C Program to Find the Frequency of Characters in a String
*/
char text[100];
char alphabet;
int freq = 0;
int main()
{
    printf("Enter a string: ");
    gets(text);
    printf("\nEnter a character to find frequency: ");
    scanf("%c",&alphabet);
    int counter = 0;
    while(text[counter] != 0)
    {
        if(alphabet == text[counter])
        {
            freq++;
        }
        counter++;
    }
    printf("\nFrequency of %c = %i",alphabet,freq);
    return 0;
}

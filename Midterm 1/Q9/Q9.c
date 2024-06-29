#include <stdio.h>
#include <string.h>
/*
  C Function to reverse words in string
*/
void reverseString(char text[], int size);
int main()
{
    char text[100];
    printf("Enter a string : ");
    fflush(stdout);
    gets(text);
    reverseString(text,strlen(text));
    return 0;
}
void reverseString(char text[], int size)
{
    char c[100];
    int i,j,k = 0;
    for(i = size - 1; i >= 0 ; i--)
    {
        if(text[i] == ' ')
        {
            for(j = k-1; j >= 0; j--)
            {
                printf("%c", c[j]);
            }
            printf(" ");
            k = 0;
        }
        else
        {
            c[k] = text[i];
            k++;
        }
    }
    if(k != 0)
    {
        for(j = k-1; j >= 0; j--)
            printf("%c", c[j]);
    }
}

#include <stdio.h>

/*
  C Program to Check Whether a Character is an Alphabet or not
*/

char c;

int main()
{
    printf("Enter a character: ");
    scanf("%c",&c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("%c is an alphabet",c);
    }
    else
    {
        printf("%c is not an alphabet",c);
    }
    return 0;
}

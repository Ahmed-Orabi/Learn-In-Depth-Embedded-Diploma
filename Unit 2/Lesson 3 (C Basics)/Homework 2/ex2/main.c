#include <stdio.h>

/*
  C Program to Check Vowel or Constant
*/

unsigned char c;

int main()
{
    printf("Enter an alphabet: ");
    scanf("%c",&c);
G
    switch(c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    {
        printf("%c is a vowel.",c);
        break;
    }
    default:
    {
        printf("%c is a constant.",c);
        break;
    }
    }
    return 0;
}

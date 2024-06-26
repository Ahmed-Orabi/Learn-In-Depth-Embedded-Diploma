#include <stdio.h>
#include <string.h>
/*
 * C Program to Reverse a Sentence using Recursion
 */
char text[100];
void reverseText(char text[], int start, int end);

int main()
{
    printf("Enter a sentence: ");
    fflush(stdin);fflush(stdout);
    gets(text);

    int length = strlen(text);
    reverseText(text, 0, length-1);

    printf("\n%s", text);
    return 0;
}

void reverseText(char text[], int start, int end)
{
    if (start <= end)
    {
        char temp;
        temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        reverseText(text, start + 1, end - 1);
    }
}

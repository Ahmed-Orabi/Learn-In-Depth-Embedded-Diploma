/*
 * C Program to print all the alphabets using a pointer. Go
 * to the editor
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr;
    char ch = 'A';
    ptr = &ch;

    printf("The Alphabets are : \n\n");
    while (*ptr <= 'Z')
    {
        printf("%c ", *ptr);
        (*ptr)++;
    }
    return 0;
}

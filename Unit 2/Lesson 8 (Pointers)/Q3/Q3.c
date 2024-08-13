#include <stdio.h>
#include <string.h>

int main() {
    char text[50];
    int length, i;
    char *ptr = text;

    printf("Input a string: ");
    fflush(stdin); fflush(stdout);
    gets(text);
    length = strlen(text);

    for(i = 0; i < length/2; i++) {
        char temp;
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (length-1) - i);
        *(ptr + (length-1) - i) = temp;
    }

    printf("Reverse of the string is : %s", text);

    return 0;
}

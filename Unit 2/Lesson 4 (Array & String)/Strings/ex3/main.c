#include <stdio.h>
#include <string.h>
/*
  C Program to Reverse String without using library function
*/
char text[100];
int length = 0,counter,len;
char temp;
int main()
{
    printf("Enter the string: ");
    scanf("%s",text);
    length = strlen(text);
    length--;
    len = length;
    for(counter = 0; counter <= (len/2); counter++,length--)
    {
        temp = text[counter];
        text[counter] = text[length];
        text[length] = temp;
    }
    printf("Reverse string is : %s",text);
    return 0;
}

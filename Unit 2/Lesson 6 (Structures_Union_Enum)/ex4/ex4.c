/*
 * ex4.c
 *
 *  Created on: 1 Aug 2024
 *      Author: Ahmed Orabi
 */

#include <stdio.h>

struct Sstudent{
	char name[50];
	unsigned int roll;
	double marks;
};
int main() {
    struct Sstudent s[10];
    int i;
    printf("Enter information of students:\n");
    for(i = 0; i <= 9; i++)
    {
    	s[i].roll = i+1;
    	printf("\nFor roll number %d\n",i+1);
    	printf("Enter name: ");
    	fflush(stdout);
        gets(s[i].name);
        printf("Enter marks: ");
        fflush(stdout);
        scanf("%lf", &s[i].marks);
        while (getchar() != '\n');
    }
    printf("Displaying information of students:\n");
    for(i = 0; i <= 9; i++)
        {
        	printf("\nInformation for roll number %d:\n", s[i].roll);
        	printf("name: %s\nmarks: %0.2f",s[i].name, s[i].marks);
        }
	return 0;
}

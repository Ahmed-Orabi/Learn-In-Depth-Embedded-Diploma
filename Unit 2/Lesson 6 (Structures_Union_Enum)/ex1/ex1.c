/*
 * ex1.c
 *
 *  Created on: 1 Aug 2024
 *      Author: Ahmed Orabi
 */
#include <stdio.h>

struct SStudent{
	unsigned char name[50];
	unsigned int roll;
	float marks;
};

int main()
{
	struct SStudent s;
	printf("Enter information of students:\n\n");
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(s.name);

	printf("Enter roll number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &s.roll);

	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);

	printf("\n\nDisplay Information\n");
	printf("Name: %s\nRoll: %d\nMarks: %0.2f",s.name,s.roll,s.marks);
	return 0;
}


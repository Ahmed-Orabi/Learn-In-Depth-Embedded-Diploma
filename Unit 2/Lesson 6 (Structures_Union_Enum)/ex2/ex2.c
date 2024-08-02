/*
 * ex2.c
 *
 *  Created on: 1 Aug 2024
 *      Author: Ahmed Orabi
 */

#include <stdio.h>

struct SDis_In_Ft{
	unsigned int feet;
	float inch;
};

int main() {
	int feetSum;
	float inchSum;

	struct SDis_In_Ft firstDis, secondDis;
	printf("Enter information for 1st distance\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &firstDis.feet);
	printf("Enter inch: ");
    fflush(stdin);fflush(stdout);
	scanf("%f", &firstDis.inch);

	printf("\nEnter information for 2nd distance\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &secondDis.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &secondDis.inch);

	feetSum = firstDis.feet + secondDis.feet;
	inchSum = firstDis.inch + secondDis.inch;

	while(inchSum >= 12)
	{
		feetSum++;
		inchSum -= 12;
	}
	printf("\nSum of distances = %d'%0.1f\"",feetSum,inchSum);
	return 0;
}

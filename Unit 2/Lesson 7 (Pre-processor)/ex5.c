/*
 * ex5.c
 *
 *  Created on: 2 Aug 2024
 *      Author: Ahmed Orabi
 */
#include <stdio.h>

#define PI 3.14159265
#define AREA_OF_CIRCLE(radius) (PI*(radius)*(radius))

int main(){
	double radius,area;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%lf", &radius);
    area = AREA_OF_CIRCLE(radius);
    printf("Area = %0.2f", area);
	return 0;
}

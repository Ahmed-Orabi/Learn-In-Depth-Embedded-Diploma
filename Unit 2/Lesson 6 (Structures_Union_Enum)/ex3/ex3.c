/*
 * ex3.c
 *
 *  Created on: 1 Aug 2024
 *      Author: Ahmed Orabi
 */

#include <stdio.h>

struct SComplexNum{
	double Real;
	double Imag;
};

struct SComplexNum GetComplexNum(char name[]);
struct SComplexNum AddComplex(struct SComplexNum num1, struct SComplexNum num2);

int main(){
    struct SComplexNum firstNum, secondNum, Summing;
    firstNum = GetComplexNum("1st");
    secondNum = GetComplexNum("2nd");

    Summing = AddComplex(firstNum, secondNum);
    printf("Sum = %0.1f+%0.1fi", Summing.Real, Summing.Imag);
	return 0;
}
struct SComplexNum GetComplexNum(char name[])
{
	struct SComplexNum Num;
	printf("For %s complex number\nEnter real and imaginary respectively: ",name);
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&Num.Real, &Num.Imag);
	return Num;
}
struct SComplexNum AddComplex(struct SComplexNum num1, struct SComplexNum num2)
{
	struct SComplexNum Sum;
    Sum.Real = num1.Real + num2.Real;
    Sum.Imag = num1.Imag + num2.Imag;
	return Sum;
}

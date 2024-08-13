/*
 * C Program to show a pointer to an array which contents
 * are pointer to structure
 */

#include <stdio.h>

struct SEmployee {
	char name[50];
	int ID;
};

int main() {
	struct SEmployee em = {"Alex", 1002};
	struct SEmployee* arr[1];

	arr[0] = &em;
	struct SEmployee** pem = arr;

	printf("Employee Name : %s \n", pem[0]->name);
	printf("Employee ID : %d \n", pem[0]->ID);
	return 0;
}

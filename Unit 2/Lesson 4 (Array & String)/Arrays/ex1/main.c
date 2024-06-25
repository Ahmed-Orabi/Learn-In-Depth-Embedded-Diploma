#include <stdio.h>
/*
  Example of Multidimensional Array In C
*/
float a[2][2];
float b[2][2];
int row,col;
float sum;
int main()
{
    printf("Enter the elements of 1st matrix\n");
    for(row = 0; row <2; row++)
    {
        for(col = 0; col <2; col++)
        {
            printf("Enter a%i%i: ",(row+1),(col+1));
            scanf("%f",&a[row][col]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(row = 0; row <2; row++)
    {
        for(col = 0; col <2; col++)
        {
            printf("Enter b%i%i: ",(row+1),(col+1));
            scanf("%f",&b[row][col]);
        }
    }
    printf("\nSum Of Matrix:\n");
    for(row = 0; row <2; row++)
    {
        for(col = 0; col <2; col++)
        {
            sum = a[row][col] + b[row][col];
            printf("%0.1f\t",sum);
            if(row == 0 && col == 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

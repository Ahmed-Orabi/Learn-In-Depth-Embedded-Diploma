#include <stdio.h>
/*
  C Program to Find Transpose of a Matrix
*/
int row, col, horz, vert;
int main()
{
    printf("Enter rows and columns of matrix: ");
    scanf("%i %i", &row, &col);
    int a[row][col];

    printf("\nEnter elements of matrix:\n");
    for (horz = 0; horz < row; horz++)
    {
        for (vert = 0; vert < col; vert++)
        {
            printf("Enter element a%i%i: ", (horz + 1), (vert + 1));
            scanf("%i", &a[horz][vert]);
        }
    }
    printf("\nEntered Matrix:\n");
    for (horz = 0; horz < row; horz++)
    {
        for (vert = 0; vert < col; vert++)
        {
            printf("%i  ",a[horz][vert]);
            if(horz == 0 && vert == (col-1))
            {
                printf("\n\n");
            }
        }
    }
    printf("\n\n\nTranspose of Matrix:\n");
    for (vert = 0; vert < col; vert++)
    {
        for (horz = 0; horz < row; horz++)
        {
            printf("%i  ",a[horz][vert]);
            if(horz == 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}

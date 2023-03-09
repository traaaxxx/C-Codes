//program to add diagonal elements of a matrix

#include<stdio.h>
void main()
{
    int m[12][12];
    int i, j, r, c, sum = 0;
    printf("Enter the order of the matrix - ");
    scanf("%d %d",&r, &c);
    printf("Enter the elements of the matrix - ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i == j)
            {
                sum = sum + m[i][j];
            }
        }
    }
    printf("\nThe sum of diagonal elements of a square matrix is %d\n", sum);
}

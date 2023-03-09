//program to swap all elements in a dynamic matrix and display it

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int i, j, rows, columns, **a;
	printf("Type the matrix rows - ");
	scanf("%d", &rows);
	printf("Type the matrix columns - ");
	scanf("%d", &columns);
	a = (int **)malloc(rows * sizeof(int));
	for (i = 0; i < rows; i++)
	{
		a[i] = (int *)malloc(columns * sizeof(int));
	}
	printf("Enter the elements - ");
	for(i = 0; i < rows; i++) 
	{
		for(j = 0; j < columns; j++)
		{
			scanf("%d", &a[i][j]);
		}
    }
	for(i = 0; i < rows; i++) 
	{
		for(j = 0; j < columns / 2; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[i][columns - j - 1];
			a[i][columns - j - 1] = temp;
		}
	}
	printf("THE NEW MATRIX AFTER REARRANGING IS - \n");
	for(i = 0; i < rows; i++) 
	{
		for(j = 0; j < columns; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
    }
}	

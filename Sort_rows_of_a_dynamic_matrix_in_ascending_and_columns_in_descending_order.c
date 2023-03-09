//program to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int i, j, k, lines, columns, **a;
	printf("Type the matrix lines - ");
	scanf("%d", &lines);
	printf("Type the matrix columns - ");
	scanf("%d", &columns);
	a = (int **)malloc(lines * sizeof(int *));

	for (i = 0; i < lines; ++i)
	{
		a[i] = (int *)malloc(columns + sizeof(int));
	}
	printf("Enter the elements of the array - ");
	for(i = 0; i < lines; i++) 
	{
		for(j = 0; j < columns; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}	
	printf("Enter either '0' for row-wise ascending sort or '1' for colomn wise descending sort - " );
	int ch;
	scanf("%d", &ch);
	switch(ch) 
	{
		case 0:
			for(i = 0; i < lines; i++) 
			{
				for(j = 0; j < columns; j++) 
				{
					for (k = 0; k < lines - i - 1; k++) 
					{
						if(a[i][k] > a[i][k + 1])
						{
							int temp = a[i][k];
							a[i][k] = a[i][k + 1];
							a[i][k + 1] = temp;
						}
				    }
				}
			}
			break;
	
		case 1:
			for(j = 0; j < columns; j++)
			{
				for(i = 0; i < lines; i++)
				{
					for (k = 0; k < columns - j - 1; k++)
					{
						if(a[k][j] < a[k + 1][j])
						{
							int temp = a[k][j];
							a[k][j] = a[k + 1][j];
							a[k + 1][j] = temp;
						}
					}
				}
			}
			break;
			
			default:
				printf("Please enter either 0 or 1");
	}
	for(i = 0; i < lines; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("%d", a[i][j]);
			printf("\n");
		}
	}
}

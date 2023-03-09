//program to calculate user defined functions in a square matrix 

#include<stdio.h>
int NONZERO (int a[10][10], int n);
int SUM (int a[10][10], int n);
int DISPLAY (int a[10][10], int n);
int PROD1 (int a[10][10], int n);
int main() 
{
	int a[10][10], n, i, j, p1, p2, c, s, d;
	printf("Enter the size of the square matrix - ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			printf("Enter element (%d,%d) - ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix - \n");
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	NONZERO(a, n);
	SUM(a, n);
	printf("\nThe elements under the minor diagonal - ");
	DISPLAY(a, n);
	PROD1(a, n);
	return 0;
}

int NONZERO (int a[10][10], int n) 
{
	int ctr = 0, i, j;
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			if (a[i][j] != 0) 
			{
				ctr++;
			}
		}
	}
	printf("\nThe number of non-zero elements in the matrix - %d", ctr);
}

int SUM (int a[10][10], int n) 
{
	int sum = 0, i, j;
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			if (i < j) 
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("\nThe sum of the elements above leading diagonal - %d", sum);
}

int DISPLAY (int a[10][10], int n) 
{
	int i, j;
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			if (i + j > n + 1) 
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}
int PROD1 (int a[10][10], int n) 
{
	int prod1 = 1, i, j;
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			if (i = j) 
			{
				prod1 = prod1 * a[i][j];
			}
		}
	}
	printf("\nThe product of the major diagonal elements - %d ", prod1);
}

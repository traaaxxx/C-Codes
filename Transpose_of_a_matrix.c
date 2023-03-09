//program to find transpose of a matrix

#include<stdio.h>
int main()
{
	int i, j, r, c, m[10][10], t[10][10];
	printf("Enter the order of the matrix - ");
	scanf("%d %d", &r, &c);
	printf("Enter the elements of the matrix -\n");
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
			t[j][i] = m[i][j];
		}
	}
	printf("\nTranspose of the Matrix -\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

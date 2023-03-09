//program to replace every dynamic array element by multiplication of previous and next of an n element

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int) malloc(n * sizeof(int));
	int* b = (int) malloc(n * sizeof(int));
	int i, j;
	printf("Enter the elements of the array - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	for(i = 0; i < n; i++)
	{
		if(i == 0)
		{
			a[0] = b[1] * b[n - 1];
			continue;
		}
		if(i == n - 1)
		{
			a[n - 1] = b[0] * b[n - 2];
			continue;
		}
		a[i] = b[i - 1] * b[i + 1];
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}	
}


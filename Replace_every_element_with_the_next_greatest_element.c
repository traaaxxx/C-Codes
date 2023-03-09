//program to to replace every element in the dynamic array with the next greatest element present in the same array

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n, i, j;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
    {
    	scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[j] > a[i])
			{
				a[i] = a[j];
				break;
			}
		}
		printf("%d ", a[i]);
	}
}

//program to rearrange elements of a dynamic array so that all even numbers are followed by odd numbers

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	printf("Enter the elements of an array - ");
	int i, j;
	for(i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) 
	{
		if(a[i] % 2 != 0)
		{
			for(j = i + 1; j < n; j++)
			{
				if(a[j] % 2 == 0)
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					break;
				}
			}
		}
		else
		{
			continue;
		}
	}
	printf("The elements after rearranging are - \n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

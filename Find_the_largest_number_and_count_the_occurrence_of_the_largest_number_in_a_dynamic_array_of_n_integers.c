//program to find the largest number and count the occurrence of the largest number in a dynamic array of n integers using a single loop

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	printf("Enter the elements - ");
	int* a = (int*)malloc(n * sizeof(int));
	int i;
	for(i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}
	int max = a[0], count = 0;
	for(i = 0; i < n; i++)
	{
		if(max == a[i])
		{
			count++;
		}
		if(max < a[i])
		{
			max = a[i];
			count = 1;
		}
	}
	printf("The max number is %d\n", max);
	printf("The number of times it occurs is %d", count);
}

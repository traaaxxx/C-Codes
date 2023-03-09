//program to find out second largest and second smallest in a dynamic array

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0], min = a[0];
	int sec_max = a[1], sec_min = a[1];
	for(i = 1; i < n; i++)
	{
		if(max < a[i])
		{
			sec_max = max;
			max = a[i];
		}
		else if(sec_max < a[i])
		{
			sec_max = a[i];
		}
		if(min > a[i])
		{
			sec_min = min;
			min = a[i];
		}
		else if(sec_min > a[i])
		{
			sec_min = a[i];
		}
	}
	printf("The second largest - %d\n", sec_max);
	printf("The second Smallest - %d", sec_min);
}

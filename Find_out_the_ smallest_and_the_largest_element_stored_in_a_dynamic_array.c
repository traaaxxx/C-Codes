//program to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k < n

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int*) malloc(n * sizeof(int));
	printf("Enter the elements of the array - ");
	int i, j;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++) 
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}
		}
	}
	printf("\n");
	int smallest_index, largest_index;
	printf("Please enter the value of K - ");
	int k;
	scanf("%d", &k);
	printf("%dth smallest element - %d\n", k, a[k - 1]);
	printf("%dth largest element - %d\n", k, a[n - k]);
}







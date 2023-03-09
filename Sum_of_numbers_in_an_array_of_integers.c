//program to find the sum of the numbers stored in an array of integers

#include<stdio.h>
int main()
{
	int n, i, sum = 0, a[50];
	printf("Enter the number of elements - ");
	scanf("%d", &n);
	printf("Enter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Original Array - ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	printf("The Sum of the Array elements is %d", sum);
	
	return 0;
}

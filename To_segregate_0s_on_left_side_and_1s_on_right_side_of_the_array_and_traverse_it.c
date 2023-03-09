//program to segregate 0s on left side and 1s on right side of the array and traverse array only once

#include <stdio.h>
#include<stdlib.h>
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
	int marker = 0, check = 0;
	for(i = 0; i < n; i++) 
	{
		if(a[i] == 1 && marker == 0) 
		{
			check = i;
			marker = 1;
			continue;
		}
		if(a[i] == 0 && marker == 1)
		{
			int temp = a[i];
			a[i] = a[check];
			a[check] = temp;
			marker = 0;
			i = check;
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}		
}

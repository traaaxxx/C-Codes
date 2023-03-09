//program to display array elements in ascending order

#include<stdio.h>
int main()
{
	int n, i, j, a[50], temp;
	printf("Enter the number of elements - ");
    scanf("%d", &n);
    printf("Enter the elements - ");	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
    }
    printf("The numbers arranged in ascending order are - ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}        
}

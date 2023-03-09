//Bubble Sorting

#include<stdio.h>
int main()
{
	int a[20], n, temp, i, j, k, l;
	printf("Enter size of the array - ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Enter the element - ");
		scanf("%d", &a[i]);
	}
	
	for(l = 0; l < n - 1; l++)
	{
		for(k = 0; k < n - 1; k++)
		{
			if(a[k] > a[k + 1])
			{
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;	
			}
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	
	return 0;
}

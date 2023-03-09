//program to find minimum distance in an unsorted dynamic array

#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int n;
	printf("Enter the size of the array - ");
	scanf("%d", &n);
	int* a = (int*) malloc(n * sizeof(int));
	int i, j, x, y, count = 0, index = 0, min = 10000;
	printf("Enter the elements - ");
	for(i = 0; i < n; i++) 
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the two numbers to be searched - ");
	scanf("%d", &x);
	scanf("%d", &y);
	for(i = 0; i < n;) 
	{
		if(a[i] != x && a[i] != y)
		{
			i++;
			continue;
		}
		if(a[i] == x)
		{
			count = 0;
			for(j = i + 1; j < n; j++)
			{
				index = 0;
				if(a[j] != y)
				{
					count++;
				}
				if(a[j] == x)
				{
					count=0;
				}
				if(a[j] == y)
				{
					index = j;
					break;
				}
			}	
		} 
		else if(a[i] == y) 
		{
			count = 0;
			for(j = i + 1; j < n; j++)
			{
				index = 0;
				if(a[j] != x)
				{
					count++;
				}
				if(a[j] == y)
				{
					
				}
				if(a[j] == x)
				{
					index = j;
					break;
				}
			}
		}
		if(index == 0)
		{
			break;
		}
		i = index;
		if (count < min)
		{
			min = count;
        }
		if(i == n - 1)
		{
			break;
		}
	}
	printf("The shortest distance is - %d", min);	
}

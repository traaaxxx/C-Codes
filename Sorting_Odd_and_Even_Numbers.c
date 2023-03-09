//program to arrange the numbers stored in the array so that it will display first all odd numbers, then even numbers

#include <stdio.h>
int main()
{
	int a[100], b[100], c[100];
	int n, i, j = 0, k = 0;
	printf("Enter number of elements - ");
    scanf("%d",&n);
    printf("\nEnter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++)
    {
    	if(a[i] % 2 == 0)
    	{
    		b[j] = a[i];
    		j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
	}
    printf("\nOdd Array - ");
    for(i = 0; i < k; i++)
    printf("%d", c[i]);
    
	printf("\nEven Array - ");
    for(i = 0; i < j; i++)
    printf("%d", b[i]);
}
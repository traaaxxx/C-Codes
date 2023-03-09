//program to read the elements of 3 X 3 matrix and change all even numbers to 1 and odd numbers to 0

#include <stdio.h>
int main()
{
	int a[3][3];
	int i, j;
    printf("\tMatrix of the order 3 X 3\n");
    printf("\nEnter the co-efficients of the matrix -\n");    
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nBefore Replacement -\n\n");
	for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 3; j++)
    	{
    		printf("%d\t", a[i][j]);
		}
		printf("\n");
    }
    
    for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 3; j++)
    	{
    		if(a[i][j] % 2 == 0)
    		{
    			a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}
	
	printf("\n\nAfter Replacement -\n\n");
	for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 3; j++)
    	{
    		printf("%d\t", a[i][j]);
		}
		printf("\n");
    }
}
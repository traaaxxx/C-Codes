/************************************************
program to print the following pattern for n rows
     1    
    1 1   
   1 1 1  
  1 1 1 1 
 1 1 1 1 1
************************************************/

#include <stdio.h>
int main()
{
	int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++)
    {
    	for (j = n; j > i; j--)
    	{
    		printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("1 ");
		}
		printf("\n");
	}
	
	return 0;
}
//program to reverse an array or string

#include <stdio.h>     
int main()    
{
	int n, i, a[50];
    printf("Enter the number of elements - ");
    scanf("%d", &n);
    printf("Enter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    }  
        
    printf("\nOriginal Array - ");    
    for (i = 0; i < n; i++) 
	{     
        printf("%d ", a[i]);     
    }        
    printf("\n");    
        
    printf("\nReversed Array - ");
    for (i = n - 1; i >= 0; i--) 
	{     
        printf("%d ", a[i]);     
    }     
    return 0;
}    

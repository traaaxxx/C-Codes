//program to create an array and display it

#include<stdio.h>
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
        
    printf("\nThe Array is ");    
    for(i = 0; i < n; i++) 
	{     
        printf("%d ", a[i]);     
    }        
    printf("\n");    
    
    return 0;
}

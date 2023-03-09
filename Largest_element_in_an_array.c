//program to find largest element stored in an array

#include<stdio.h> 
int main()
{
	int a[50], i, n, large;
    printf("Enter the number of elements - ");
    scanf("%d", &n);
    printf("Enter the elements - ");	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	large = a[0];
	
	for(i = 1; i < n; i++)
    {
    	if(a[i] > large)
		large = a[i];
    }
	printf("\nLargest Element is %d", large);
	
	return 0;
}

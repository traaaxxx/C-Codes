//program to print largest and smallest number in an array

#include<stdio.h> 
int main()
{
	int a[50], i, n, large, small;
    printf("Input the number of elements to be stored in the array - ");
    scanf("%d", &n);
    printf("Enter the Elements - ");	
	for(i = 0; i < n; i++)
	scanf("%d", &a[i]);
	large = small = a[0];
	
	for(i = 1; i < n; i++)
    {
    	if(a[i] > large)
		large = a[i];
		if(a[i] < small)
		small = a[i];
    }

printf("\nMinimum Value: %d", small);
printf("\n\nMaximum Value: %d", large);
 
return 0;
}
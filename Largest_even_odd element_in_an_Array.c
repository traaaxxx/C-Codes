//program to find out the largest even/odd integer stored in the array of n integers where n will be input by the user

#include<stdio.h>
int main()
{
    int a[100], even = 0, odd = 0, n, i;
    printf("Enter number of elements - ");
    scanf("%d", &n);
    printf("\nEnter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0 && a[i] > even)
		{
			even = a[i];
		}
		
        if(a[i] % 2 != 0 && a[i] > odd)
        {
        	odd = a[i];
		}    
	}
    printf("\nLargest Even Number is %d\n", even);
    printf("Largest Odd Number is %d", odd);
}
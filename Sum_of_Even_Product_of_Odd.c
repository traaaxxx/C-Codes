//program to store 10 numbers into an array. Find the sum/product of the even numbers and product of the odd numbers

#include<stdio.h>
int main()
{
    int a[10], sum = 0, eprod = 1, oprod = 1, i;
    for(i = 0; i < 10; i++)
    {
    	printf("Enter Number - ");
        scanf("%d", &a[i]);
	}
    
    for(i = 0; i < 10; i++)
    {
    	if(a[i] % 2 == 0)
    	{
    		sum = sum + a[i];
    		eprod = eprod * a[i];	
		}
		else
		{
			oprod = oprod * a[i];
		}
	}
	printf("\nSum of Even Digit = %d", sum);
	printf("\nProduct of Even Digit = %d", eprod);
    printf("\nProduct of Odd Digit = %d", oprod);
}
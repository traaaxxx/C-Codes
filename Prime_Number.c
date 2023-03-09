//program to check whether a number n is prime number or not

#include <stdio.h>
int main()
{
	int n, i, factor = 0;              
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			factor++;                       
		}	
	}
	if(factor == 2)
	{
		printf("\n%d is a Prime Number", n);
	}
	else
	{
		printf("\n%d isn't a Prime Number", n);
	}
	
	return 0;
}

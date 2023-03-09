//program to to check whether an input integer is perfect number or not

#include <stdio.h>
int main()
{
	int n, i, sum = 0;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	if(n == sum)
	{
		printf("\n%d is a Perfect Number", n);
	}
	else
	{
		printf("\n%d isn't a Perfect Number", n);
	}
	
	return 0;
}
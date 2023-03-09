//program to test whether a number is prime or not using functions

#include <stdio.h>
void prime(int x);
int main()
{
	int n;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	prime(n);
	
	return 0;
}

void prime(int x)
{
	int i, ctr = 0;
	for(i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			ctr++;
		}	
	}
	if(ctr == 2)
	{
		printf("\n%d is a Prime Number", x);
	}
	else
	{
		printf("\n%d isn't a Prime Number", x);
	}
}
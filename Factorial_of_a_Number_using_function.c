//program to calculate factorial of a number using function

#include <stdio.h>
int fact(int x)
{
	int i, f = 1;
	for (i = 1; i <= x; i++)
	{
		f = f * i;
	}
	return f;
}

void main()
{
	int n, factorial;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	factorial = fact(n);
	
	printf("\nFactorial of %d is %d", n, factorial);
}

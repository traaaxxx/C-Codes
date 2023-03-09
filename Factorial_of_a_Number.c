//program to calculate the factorial of a given number

#include <stdio.h>
int main()
{
	int n, i, f = 1;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	printf("\nFactorial of %d is %d", n, f);
	
	return 0;
}
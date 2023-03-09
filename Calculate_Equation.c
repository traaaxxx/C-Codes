//program to calculate the equation y = x^n where n is a non-negative integer

#include <stdio.h>
int main()
{
	int n, i;
	float x, y = 1.0;
	printf("Enter the values of x and n (x, n): ");
	scanf("%f %d", &x, &n);
	
	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			y = y * x;
		}
		printf("\n%f to the power of %d results in %f", x, n, y);
	}
	else
	{
		printf("\nERROR! n should be a non - negative integer");
	}
	
	return 0;
}
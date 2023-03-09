/**********************************************
program to calculate the sum of the following -
S = 1 + 1/2! + 1/3! + 1/4! + .......... n terms
**********************************************/

#include <stdio.h>
int main()
{
	int n, x = 1, i;
	float sum = 0.0, f;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	while (x <= n)
	{
		for (i = 1; i <= x; i++)
		{
			f = 1.0;
			f = f * i;
		}
		sum = sum + (1 / f);
		x++;
	}
	printf("\nThe Sum of the Series is %f", sum);
	
	return 0;
}
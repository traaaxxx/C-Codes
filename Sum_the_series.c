//program to find the sum of the series S = 1+(1+2)+(1+2+3)+...+(1+2+3+...+n)

#include<stdio.h>
int main()
{
    int n, s, sum = 0, i, j;
    printf("Enter value for n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
    	s = 0;
    	for (j = 1; j <= i; j++)
    	{
    		s = s + j;
		}
		sum = sum + s;
	}
    printf("\nThe Sum of Series up to %d = %d\n", n, sum);

        return 0;
}
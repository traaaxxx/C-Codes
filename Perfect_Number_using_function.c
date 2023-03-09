//program to find a number is perfect or not using function

#include <stdio.h>
int perfect(int n);
int main()
{
    int n, i, sum;
    printf("Enter an Integer - ");
    scanf("%d", &n);

    if (perfect(n))
        printf("\n%d is a Perfect Number", n);
    else
        printf("\n%d isn't a Perfect Number", n);

    return 0;
}

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++) 
	{
        if (n % i == 0)
        {
        	sum += i;
		}            
    }
    if (sum == n)
    {
    	return 1;
	}        
    else
    {
    	return 0;
	}        
}
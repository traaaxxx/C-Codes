//program to count even number using recursion

#include <stdio.h>
int even(int n);
int main()
{
	int n;	
	printf("Enter any Number - ");
	scanf("%d", &n);	
	
	printf("\n%d Even Digit(s) are present", even(n));
    
    return 0;
}

int even(int n)
{
	if(n == 0)
	return 0;
	{
		return ((n % 10) % 2 == 0) + even(n / 10);
	}
}
//program to check whether a number is Armstrong Number or not using function

#include <stdio.h>
int armstrong(int n);
int main()
{
	int n;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	armstrong(n);
	
	return 0;
}

int armstrong(int n)
{
	int r, c, s;
	c = n;
	while (n!= 0)
	{
		r = n % 10;
		s = s + (r*r*r);
		n = n / 10;	
	}
	if (c == s)
	{
		printf("\n%d is an Armstrong Number", c);
	}
	else
	{
		printf("\n%d isn't an Armstrong Number", c);
	}
		
	return 0;
}
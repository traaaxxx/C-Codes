//program to print Armstrong Number

#include <stdio.h>
int main()
{
	int n, r, c, s;
	printf("Enter a Number - ");
	scanf("%d", &n);
	c = n;
	while (n!= 0)
	{
		r = n % 10;
		s = s + (r*r*r);
		n = n / 10;	
	}
	if (c == s)
	printf("\n%d is an Armstrong Number", c);
	else
	printf("\n%d isn't an Armstrong Number", c);
	
	return 0;
}
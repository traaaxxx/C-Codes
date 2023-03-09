//program to swap two integer numbers using a third variable

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first Integer - ");
	scanf("%d", &a);
	printf("Enter second Integer - ");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	
	printf("Result after Swapping - %d and %d", a, b);
	
	return(0);
}
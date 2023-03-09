//program to swap the contents of two variables by using a single statement

#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter a Variable 1 - ");
	scanf("%d", &a);
	printf("Enter a Variable 2 - ");
	scanf("%d", &b);
	(a ^= b), (b ^= a), (a ^= b);
	printf("The swapped numbers are - %d %d", a, b);
	
	return(0);
}
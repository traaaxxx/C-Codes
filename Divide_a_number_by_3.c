//program to divide the number by 3 and print the result

#include <stdio.h>
int main()
{
	int a, b, quotient;
	printf("Enter a dividend - ");
	scanf("%d", &a);
	quotient = a/3;
	
	printf("\nThe quotient is - %d", quotient);
	
	return(0);
}
//program to read a number and find the sum of the digits of that number

#include <stdio.h>
int main()
{
	int a, b, sum;
	printf("Enter a Number - ");
	scanf("%d", &a);
	
	while(a>0)
	{
		b = a % 10;
		sum = sum + b;
		a = a / 10;
	}
	printf("Sum of the digits is - %d", sum);
	
	return 0;
}
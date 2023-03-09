//program to read a number and test whether its positive or negative

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a Number - ");
	scanf("%d", &a);
	
	if (a>0)
	{
		printf("The number is Positive");
	}
	else if (a==0)
	{
		printf("The number is neither Positive nor Negative");
	}
	else 
	{
		printf("The number is Negative");
	}
	
	return 0;
}
//program to read a number and test whether its even or odd

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a Number - ");
	scanf("%d", &a);
	
	if (a%2==0)
	{
		printf("Its an Even Number");
	}
	else
	{
		printf("Its a Odd Number");
	}
	
	return 0;
}
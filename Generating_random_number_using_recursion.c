//program to print random number using recursion

#include<stdio.h>
int sum(int x)
{
	int s = 0;
	if(x == 1)
	{
		return x;
	}
	else
	{
		s = x + sum(x - 1);
	}
}

int main()
{
	int num, a;
	printf("Enter a number - ");
	scanf("%d", &num);
	a = sum(num);
	printf("The random number is - %d", a);
}

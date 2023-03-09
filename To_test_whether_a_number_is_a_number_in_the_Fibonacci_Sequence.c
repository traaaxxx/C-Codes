//program to test whether a number is in the Fibonacci Sequence or not

#include<stdio.h>
int main()
{
	int i, n, flag = 0;
	int t1 = 0, t2 = 1;
	int nextterm = t1 + t2;
	printf("Enter the number to check - ");
	scanf("%d", &n);
	for(i = 3; i <= 9000; i++)
	{
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		if(n == nextterm || n == t1 || n == t2)
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		printf("Its Present\n");
	}
	else
	{
		printf("It isn't Present\n");
	}
	return 0;
}

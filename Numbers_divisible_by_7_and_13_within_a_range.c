//program to print numbers divisible by 7 and 13 within a range

#include<stdio.h>
int main()
{
	int i, a, b;
	printf("Enter the Range - ");
	scanf("%d %d", &a, &b);
	for(i = a; i <= b; i++)
	{
		if(i % 7 == 0 || i % 13 == 0)
		{
			printf("Number - %d\n", i);
		}
	}
	
	return 0;
}

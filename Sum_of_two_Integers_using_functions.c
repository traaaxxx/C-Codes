//program to add two numbers using function

#include <stdio.h>
int sum(int, int);
int sum(int x, int y)
{
	int s; 
	s = x + y;
	
	return s;
}

int main()
{
	int a, b, add;
	printf("Enter the Integers - ");
	scanf("%d %d", &a, &b);
	add = sum(a, b);
	printf("\nSum of the Integers is %d", add);
	
	return 0;
}



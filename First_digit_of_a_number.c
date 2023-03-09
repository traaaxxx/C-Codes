//program to find the first digit of a number using recursion

#include<stdio.h>
int first_digit(int num)
{
	int f;
	f = num;
	while (f >= 10)
	{
		f = f / 10;
	}
}

int main()
{
	int num, first;
	printf("Enter an integer - ");
    scanf("%d", &num);

    first = first_digit(num);
    printf("\nThe first digit of %d is %d\n", num, first);
     
    return 0;
}

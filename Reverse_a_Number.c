//program to accept a number and reverse the number

#include <stdio.h>
int main()
{
	int n, remainder, reverse;
	printf("Enter a Number - ");
	scanf("%d", &n);
	
	while (n != 0) 
	{
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("\nReversed Number = %d", reverse);
    
	return 0;
}
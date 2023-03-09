//program to check a number is a Palindrome using functions

#include <stdio.h>
int palindrome(int n);
int main() 
{	
    int n;
    printf("Enter an Integer - ");
    scanf("%d", &n);
    
    palindrome(n);
    
    return 0;
}

int palindrome(int n)
{
	int rev = 0, rem, org;
	org = n;
    while (n != 0) 
	{
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (org == rev)
        printf("\n%d is a Palindrome", org);
    else
        printf("\n%d is not a Palindrome", org);
    return 0;
}
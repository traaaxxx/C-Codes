//program to check whether a number is a Palindrome

#include <stdio.h>
int main() 
{
    int n, rev = 0, rem, org;
    printf("Enter an Integer - ");
    scanf("%d", &n);
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
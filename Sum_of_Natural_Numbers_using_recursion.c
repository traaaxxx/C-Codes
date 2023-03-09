//program to find sum of Natural Numbers using recursion

#include <stdio.h>
int sum(int n);
int main() 
{
    int n;
    printf("Enter a Natural Number - ");
    scanf("%d", &n);
    printf("\nSum of the Numbers = %d", sum(n));
    
    return 0;
}

int sum(int n) 
{
    if (n != 0)
    {
    	return n + sum(n - 1);
	}        
    else
    {
    	return n;
	}        
}
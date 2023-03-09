//program to find the GCD/HCF of two numbers using for loop

#include <stdio.h>
int main()
{
	int n1, n2, i, HCF;  
    printf("Enter two numbers - ");  
    scanf("%d %d", &n1, &n2);
    
    for(i = 1; i <= n1 && i <= n2; i++)  
    {  
        if (n1 % i == 0 && n2 % i == 0)  
        HCF = i;
    }
    printf("\nGCD/HCF of two numbers %d and %d = %d", n1, n2, HCF);  
    
	return 0;  
}
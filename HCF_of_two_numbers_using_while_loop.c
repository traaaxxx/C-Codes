//program to find the GCD/HCF of two numbers using while loop

#include <stdio.h>
int main()
{
	int n1, n2;  
    printf("Enter two numbers - ");  
    scanf("%d %d", &n1, &n2);
    
    while (n1 != n2)
    {  
        if (n1 > n2)
        {
        	n1 = n1 - n2;
		}
		else
		{
			n2 = n2 - n1;
		}	
    }
    printf("\nGCD/HCF of the two numbers = %d", n1);  
    
	return 0;  
}
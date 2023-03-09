//program to test whether a string is palindrome or not

#include <stdio.h>
int main()
{
    char a[100];
    int i = 0, j, p = 0;
    printf("Enter the String - ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++);
    {
    	for(j = 0; j < i / 2; j++)
    	{
    		 if(a[j] != a[i - j - 1])
    		 {
    		 	p = 1;
			 }
		}
		if(p == 1)
		{
			printf("\nThe string ain't a Palindrome");
		}
		else
		{
			printf("\nThe string is a Palindrome");
		}
    }
    return 0;
}
        

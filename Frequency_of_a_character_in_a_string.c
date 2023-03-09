//program to calculate the frequency of a character in a string

#include <stdio.h>
int main() 
{
    char str[1000], ch;
    int i, ctr = 0;
    
    printf("Enter a string - ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency - ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) 
	{
        if (ch == str[i])
        {
        	ctr++;
		}   
    }
    printf("Frequency of %c = %d", ch, ctr);
    
    return 0;
}


//program to read a character from the user and test it whether its a vowel or consonant or not an alphabet using switch case

#include <stdio.h>
int main() 
{
    char c;
    printf("Enter an Alphabet: ");
    scanf("%c", &c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        switch (c)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\n%c is a VOWEL", c);
                break;
            default:
                printf("\n%c is a CONSONANT",c);            
        }
    }
	else
	{
		printf("\n%c ain't an Alphabet",c);
	}
    
	return 0;
}

//program to read a character from the user and test it whether its a vowel or consonant or not an alphabet

#include <stdio.h>
int main() 
{
    char c;
    int lv, uv;
    printf("Enter an Alphabet: ");
    scanf("%c", &c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
    	lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
		uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
		if (lv || uv)
        printf("\n%c is a VOWEL", c);
		else
        printf("\n%c is a CONSONANT", c);
	}
	else
	{
		printf("\n%c ain't an Alphabet",c);
	}
    
	return 0;
}

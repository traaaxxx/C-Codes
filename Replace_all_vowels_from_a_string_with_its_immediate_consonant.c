//program to replace all vowels from a string with its immediate consonant

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
	char s[100];
    printf("Enter a string - ");
    gets(s);
    for(i = 0; i < 100; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s [i] == 'U')
        {
            s[i] = s[i + 1];
        }
    }
    for(i = 0; i < 100; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s[i] = s[i + 1];
        }
    }
    for(i = 0; i < 100; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s[i] = s[i + 1];
        }
    }
    printf("The Final string is - %s", s);
    
    return 0;
}

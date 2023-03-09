//program to find the position of substring in a given string

#include<stdio.h>
#include<string.h>
int main()
{
	char s[30], t[20];
	char *found;
	puts("Enter the first string - ");
	gets(s);
	puts("\nEnter the string to be searched - ");
	gets(t);
	found = strstr(s, t);
	if(found)
	{
		printf("\nThe String is found at %d position\n", found-s);
	}
	else
	{
		printf("\nString not found...");
	}
	
	return 0;
}

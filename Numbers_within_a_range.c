//program to print all numbers within a given range provided by the user

#include <stdio.h>
int main()
{
	int int1, int2, num;
	printf ("Enter Range: ");
    scanf ("%d %d", &int1, &int2);
    printf("\nThe Numbers are - ");
	for (num = int1; num <= int2; num++) 
	{
		printf("%d ", num);
	}
	
	return 0;
}
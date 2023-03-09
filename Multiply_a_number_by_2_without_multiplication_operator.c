//program to multiply an integer by 2 without using multiplication operator

#include <stdio.h>
int main()
{
    int num, i, m = 0;
    printf("Enter the integer to be multiplied by 2 - ");
    scanf("%d", &num);
    
    for(i = 1; i <= 2; i++)
	{
        m = m + num;
    }
    printf("\n\t%d * 2 = %d", num, m);
    return 0;
}
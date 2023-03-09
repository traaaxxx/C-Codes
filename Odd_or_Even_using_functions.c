//program to test whether a number is even or odd

#include <stdio.h>
int even(int num)
{
    return (num % 2 == 0);
}

void main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);
    
    if(even(num))
    {
        printf("\nThe number is Even");
    }
    else
    {
        printf("\nThe number is Odd");
    }
}
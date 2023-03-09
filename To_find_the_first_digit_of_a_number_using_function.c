//program to find the first digit of a number using function

#include<stdio.h>
int main()
{
    int n, first;
    printf("Enter the number - ");
    scanf("%d", &n);
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    printf("First Digit = %d", first);

    return 0;
}

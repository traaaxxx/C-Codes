//program to check whether a number is even or odd without using arithmtic or relational operators

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    (n & 1) ? printf("\nThe number is ODD") : printf("\nThe number is EVEN");
    return 0;
}

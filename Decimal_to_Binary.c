//program to convert decimal to binary

#include <stdio.h>
int main()
{
    int i, a[100], n, c;
    printf("Enter the Number - ");
    scanf("%d", &n);
    printf("\nDecimal Value = %d", n);
    
    for(i = 0; n > 0; i ++)
    {
        a[i] = n % 2;
        n = n / 2;
    } 
    printf("\nBinary Value = ");
    for(c = i - 1; c >= 0; c--)
    {
        printf("%d", a[c]);
    }
    return 0;
}


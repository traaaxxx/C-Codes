//program to read three numbers and find the largest among them using conditional operators

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers = ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    (num1 > num2 && num1 > num3) ? printf("\nLargest Number = %d\n", num1)
    : (num2 > num3 && num2 > num1) ? printf("\nLargest Number = %d\n", num2)
    : printf("\nLargest Number = %d\n", num3);
    
    return (0);
}
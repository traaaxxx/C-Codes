//program to swap numbers in cyclic order using call by reference

#include <stdio.h>
void cyclicSwap(int * a, int * b, int * c);
int main() 
{
    int a, b, c;

    printf("Enter a, b and c respectively - ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nValue Before Swapping -\n\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("\n\nValue After Swapping -\n\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

void cyclicSwap(int * n1, int * n2, int * n3) 
{
    int temp;

    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}



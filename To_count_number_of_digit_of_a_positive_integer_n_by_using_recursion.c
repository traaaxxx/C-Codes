//program to count number of digits of a positive integer n by using recursion

#include<stdio.h>
int number(int num)
{
    static int count = 0;
    if(num > 0)
    {
        count++;
        number(num / 10);
    }
    else
    {
        return count;
    }
}

int main()
{
    int n;
    int count = 0;
    printf("Enter a number - ");
    scanf("%d", &n);
    count = number(n);
    printf("Total digits in number %d is %d\n", n, count);
     
    return 0;
}

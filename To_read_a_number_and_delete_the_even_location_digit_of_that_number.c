//program to read a number and delete the even location digit of that number

#include<stdio.h>
int main()
{
    int rem, rev = 0, rnum = 0, count = 0;
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    while(rev > 0)
    {
        rem = rev % 10;
        count++;
        if(count % 2 == 1)
        rnum = rnum * 10 + rem;
        rev = rev / 10;
    }
    printf("The required output is %d", rnum);
    
    return 0;
}

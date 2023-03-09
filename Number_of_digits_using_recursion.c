//program to count the number of digits of a positive integer by recursion

#include <stdio.h>
int count(int num)
{
    static int ctr = 0;
    if(num > 0)
    {
        ctr++;
        count(num / 10);
    }
    else
    {
        return ctr;
    }
}

int main()
{
    int num;
    int ctr = 0;
    printf("Enter a positive integer - ");
    scanf("%d", &num);

    ctr = count(num);
    printf("\nTotal digits in number %d is %d\n", num, ctr);
     
    return 0;
}

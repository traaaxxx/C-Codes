//program to find out prime numbers from 1 to 100 using function

#include<stdio.h>
void prime();
int main()
{
    printf("Prime Numbers between 1 and 100\n\n");
    prime();
    return 0;
}

void prime()
{
    int n, k, ctr;
    for(n = 2; n <= 100; n++)
	{
        ctr = 0;
        for(k = 2; k <= n / 2; k++)
		{
			if((n % k) == 0)
			{
				ctr++;
				break;
			}
        }
        if(ctr == 0)
        printf(" %d ", n);
    }
}
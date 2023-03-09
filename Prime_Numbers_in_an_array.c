//program to store prime numbers in an array

#include <stdio.h>
int main()
{
    int n, a[100], b[100], c, d = 0, i, j;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    printf("Enter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        c = 0;
        for(j = 2; j < a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            b[d] = a[i];
            d++;
        }
    }
    printf("\nPrime Numbers in the array are - ");
    for(i = 0; i < d; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
        
    


//program to find the sum of all elements in a matrix

#include<stdio.h>
int main()
{
	int a[10][10], r, c, sum = 0, i, j;
	printf("Enter the order of the matrix - ");
	scanf("%d %d", &r, &c);
	printf("Enter elements of the matrix - ");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nThe Matrix -\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < r; i++)
    {
    	for(j = 0; j < c; j++)
    	{
    		sum = sum + a[i][j];
		}
	}
    printf("\nSum of all the elements in the matrix is %d", sum);
    
	return 0;
}

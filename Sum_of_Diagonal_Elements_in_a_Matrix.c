//program to read the elements of 5 X 5 matrix and print the sum of the diagonal elements of the matrix

#include <stdio.h>
int main()
{
	int a[5][5];
	int i, j, sum = 0;
	printf("\tMatrix of the order 5 X 5\n");
    printf("\nEnter the co-efficients of the matrix -\n");    
	for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nThe Matrix -\n\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++) 
        {
            if(i == j)
            {
            	sum = sum + a[i][j];
			}
        }
    }
    printf("\nThe Sum of the diagonal co-efficients is %d", sum);
    
	return 0;
}
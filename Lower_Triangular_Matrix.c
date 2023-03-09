//program to read the elements of 3 X 3 matrix and print the lower triangular matrix

#include<stdio.h>
int main()
{
	int a[3][3];
	int i, j;
	printf("\tMatrix of the order 3 X 3\n");
    printf("\nEnter the co-efficients of the matrix -\n");    
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nThe Lower Triangular Matrix -\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            if(i >= j)
            {
            	printf("%d", a[i][j]);
			}
        }
        printf("\n");
    }
    return 0;
}
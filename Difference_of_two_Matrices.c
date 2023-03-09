//program to read the elements of two 3 X 3 matrixes and find their difference and display it

#include <stdio.h>
int main()
{
	int a[3][3], b[3][3];
	int i, j, difference;
	printf("\tMatrices of order 3 X 3\n");
    
	printf("\nEnter the co-efficients of the First Matrix -\n");    
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter the co-efficients of the Second Matrix -\n");    
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

	printf("\n\n\tThe Matrices -\n\n");
    
	printf("First Matrix -\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix -\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe Difference of the above Matrices is -\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        	difference = a[i][j] - b[i][j];
        	printf("%d\t", difference);
		}
		printf("\n");
    }
    return 0;
}
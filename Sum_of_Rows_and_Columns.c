//program to find out the sum of the row and column elements stored in a matrix

#include <stdio.h>
int main ()
{
	int array[10][10];
    int i, j, m, n, sum = 0;
    printf("Enter the order of the matrix - ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the co-efficients of the matrix -\n");   
	for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\nThe Matrix -\n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
 
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            sum = sum + array[i][j] ;
        }
 
        printf("\nSum of row %d is %d\n", i, sum);
        sum = 0;
    }
        
	sum = 0;
    for(j = 0; j < n; j++) 
    {
        for(i = 0; i < m; i++)
        {
            sum = sum + array[i][j];
        }
 
        printf("\nSum of column %d is %d\n", j, sum);
        sum = 0;
    }
}
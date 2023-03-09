//program to multiply two matrices and display it

#include<stdio.h>   
int main()  
{  
    int r, c, i, j, first[10][10], second[10][10], sum[10][10];  
    printf("Enter the order of the matrix - ");  
    scanf("%d %d", &r, &c);  
    printf("\nEnter the elements of first matrix -\n");  
    for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &first[i][j]);  
		}
	}   
	
    printf("\nEnter the elements of second matrix -\n");  
    for (i = 0; i < r; i++)
    {
    	for (j = 0; j < c; j++)
    	{
    		scanf("%d", &second[i][j]);
		}
	}
        
    printf("\nProduct of the matrices -\n");  
    for (i = 0; i < r; i++)  
    {  
        for (j = 0; j < c; j++)  
        {  
            sum[i][j] = first[i][j] * second[i][j];  
            printf("%d\t", sum[i][j]);  
        }  
        printf("\n");  
    } 
	 
    return 0;  
}

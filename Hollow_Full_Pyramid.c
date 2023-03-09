/**************************************************
program to print the following pattern for n rows -
     *      
	* *     
   *   *    
  *     *   
 *       *  
* * * * * * 
**************************************************/

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows - ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            if(i == n || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
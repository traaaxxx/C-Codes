//program to find largest number using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n, i;
    double *data;
    printf("Enter the total number of elements - ");
    scanf("%d", &n);
    printf("\n");
	
	data = (double *)calloc(n, sizeof(double));
    if (data == NULL)
    {
    	printf("Error!!! Memory not allocated...");
        exit(0);
	}
	
	for (i = 0; i < n; ++i)
	{
		printf("Enter Number %d - ", i + 1);
        scanf("%lf", data + i);
	}
	
	for (i = 1; i < n; ++i) 
	{
		if (*data < *(data + i))
		{
			*data = *(data + i);
		}
	}
	printf("\nLargest Number is %.2lf", *data);
    free(data);
    
    return 0;  
}

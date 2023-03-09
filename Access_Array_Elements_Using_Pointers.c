//program to access array elements using pointers

#include <stdio.h>
int main() 
{
    int data[5];

    printf("Enter Elements - ");
    for (int i = 0; i < 5; ++i)
    {
    	scanf("%d", data + i);
	}        

    printf("\nYou Entered - ");
    for (int i = 0; i < 5; ++i)
    {
    	printf("%d ", *(data + i));
	}
        
    return 0;
}
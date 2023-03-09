//program to copy an array to another array

#include <stdio.h>
int main()
{
	int a[100], b[100];
	int i, n;
	printf("Enter number of elements - ");
    scanf("%d",&n);
    printf("\nEnter the elements - ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++)
    {
    	b[i] = a[i];
	}
	printf("\nOriginal Array - ");
	for(i = 0; i < n; i++)
    printf("%d ", a[i]);
	
	printf("\nCopied Array - ");
	for(i = 0; i < n; i++)
    printf("%d ", b[i]);
}

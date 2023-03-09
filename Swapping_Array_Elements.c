//program to swap the pair of elements starting from beginning

#include<stdio.h>

int main() 
{
   int i, temp, num, a[100];
   printf("Enter number of elements - ");
    scanf("%d",&num);
    printf("\nEnter the Array Elements - ");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
    }

   i = 0;
   while (i < num - 1) 
   {
       temp = a[i];
       a[i] = a[i + 1];
       a[i + 1] = temp;
       i = i + 2;
   }

   printf("\nArray List after swapping - ");
   for (i = 0; i < num; i++) 
   {
       printf("%d ", a[i]);
   }

   return 0;
}
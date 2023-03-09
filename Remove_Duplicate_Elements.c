//program to remove duplicate elements in an array

#include<stdio.h>
int main()
{
   int a[50], i, j, k, count = 0, dup[50], num;
   printf("Enter size of the array - ");
   scanf("%d", &num);
   printf("Enter Elements of the array - ");
   for(i = 0; i < num; i++)
   {
      scanf("%d", &a[i]);
   }
   
   printf("\nEntered elements - \n");
   for(i = 0; i < num; i++)
   {
      printf("%d ", a[i]);
   }   
   for(i = 0; i < num; i++)
   {
      for(j = i + 1; j < num; j++)
	  {
         if(a[i] == a[j])
		 {
            for(k = j; k < num - 1; k++)
			{
               a[k] = a[k + 1];
            }
            j--;
            num--;
         }
      }
   }
   printf("\n\nArray after removing duplicate elements - \n");
   for(i = 0; i < num; i++)
   {
      printf("%d ", a[i]);
   }
}
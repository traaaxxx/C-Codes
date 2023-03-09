//program to print the multiplication table upto n where n is entered by the user

#include <stdio.h>
int main() 
{
  int n, i, m;
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("\nThe Table is -\n", i);
  
  for (i = 1; i <= 10; ++i) 
  {
	m = n * i;
	printf("%d * %d = %d \n", n, i, m);
  }
  
  return 0;
}

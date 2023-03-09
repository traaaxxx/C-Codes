//program to find sum of digits using a function

#include <stdio.h>
int sum(int num)
{
  int s = 0, rem = 0;
  while (num > 0)
  {
     rem = num % 10;
     s = s + rem;	  	  
     num = num / 10;
  }
  return s;
}

int sum(int num);
int main()
{
	int num, s;
	printf("Enter a number - ");
	scanf("%d", &num);
	s = sum(num);
	printf("\nSum of the digits - %d", s);
	
	return 0;
}
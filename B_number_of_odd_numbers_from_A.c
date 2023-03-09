//program to input two integers A and B then print B number of odd numbers from A

#include <stdio.h>
int main()
{
	int a, b, i;
	printf("Enter an Integer A = ");
	scanf("%d", &a);
	printf("Enter an Integer B = ");
	scanf("%d", &b);
	
	printf("%d Odd Numbers from %d are: ", b, a);
	
	for(i=a; i<=b*2+2; i+=2)
	{
		printf("%d\n", i);	
	}
	return 0;
}
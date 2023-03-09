//program to find Centigrade for a given Fahrenheit temperature

#include <stdio.h>
int main()
{
	float c, f;
	printf("Enter a Temperature in Fahrenheit - ");
	scanf("%f", &f);
	c = (5*(f-32))/9;
	
	printf("\nThe temperature in Centigrade is %f", c);
	
	return(0);	
}
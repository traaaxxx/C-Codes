//program to convert a given quantity in meter to its equivalent kilometer and meter

#include <stdio.h>
int main()
{
	int km, m, meter;
	printf("Input distance in Meter - ");
	scanf("%d", &meter);
	km = (meter/1000);
	m = (meter-(1000*km));
	printf("%d Meter = %d Kilometer and %d Meter", meter, km, m);
	
	return(0);
}
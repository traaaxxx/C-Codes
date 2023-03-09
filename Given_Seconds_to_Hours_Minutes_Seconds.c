//program to convert given second into its equivalent hour, minute and second

#include <stdio.h>
int main()
{
	int h, m, s, secs;
	printf("Input time in Seconds - ");
	scanf("%d", &secs);
	h = (secs/3600);
	m = (secs-(3600*h))/60;
	s = (secs-(3600*h)-(m*60));
	printf("%d Seconds = %d Hour, %d Minute and %d Second", secs, h, m, s);
	
	return(0);
}
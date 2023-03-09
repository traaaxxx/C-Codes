//program to add two times

#include <stdio.h>
int main()
{
	int h1, m1, s1, h2, m2, s2, t1, t2, t3;
	printf("Enter Time 1 (hh:mm:ss) - ");
	scanf("%d %d %d", &h1, &m1, &s1);
	printf("Enter Time 2 (hh:mm:ss) - ");
	scanf("%d %d %d", &h2, &m2, &s2);
	t1 = (h1 + h2);
	t2 = (m1 + m2);
	t3 = (s1 + s2);
	
	printf("The total time is - %d:%d:%d", t1, t2, t3);
	
	return(0);
}
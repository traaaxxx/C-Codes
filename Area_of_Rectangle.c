//program to display area of a rectangle

#include <stdio.h>
int main()
{
	int l, w, area;
	printf("Enter a Length - ");
	scanf("%d", &l);
	printf("Enter a Width - ");
	scanf("%d", &w);
	area = l*w;
	
	printf("\nArea of the Rectangle is - %d", area);
	
	return(0);
}
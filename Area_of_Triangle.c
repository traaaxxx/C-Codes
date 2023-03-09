//program to calculate area of a triangle whose base and height is given

#include <stdio.h>
int main()
{
	int b, h, area;
	printf("Enter a Base - ");
	scanf("%d", &b);
	printf("Enter a Height - ");
	scanf("%d", &h);
	area = (b*h)/2;
	
	printf("\nArea of the Triangle is - %d", area);
	
	return(0);
}
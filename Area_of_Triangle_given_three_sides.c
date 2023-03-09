//program to calculate area of a triangle whose three sides are given

#include <stdio.h>
#include <math.h>
 
int main()
{
    int a, b, c, s, area;
	printf("Enter the values of a, b and c - ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c)/2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nArea of a Triangle = %d", area);
    
    return(0);
}
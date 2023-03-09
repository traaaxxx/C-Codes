//program to calculate the area of a circle, triangle or rectangle depending upon the choice of the user

#include <stdio.h>
int main()
{
	int choice, radius, base, height, length, width, arT, arR;
	float arC;

	//Display Menu
	printf("List of Choices -");
	printf("\n\n1: Area of a Circle");
	printf("\n2: Area of a Triangle");
	printf("\n3: Area of a Rectangle");
	printf("\n\nSelect your preferred choice - ");
	scanf("%d", &choice);
	
	if (choice == 1)
	{
		printf("\nEnter a Radius - ");
		scanf("%d", &radius);
		arC = 3.14 * (radius * radius);
		printf("Area of the Circle = %f", arC);
	}
	else if (choice == 2)
	{
		printf("\nEnter a Base - ");
		scanf("%d", &base);
		printf("Enter a Height - ");
		scanf("%d", &height);
		arT = (base * height) / 2;
		printf("Area of the Triangle = %d", arT);
	}
	else if (choice == 3)
	{
		printf("\nEnter a Length - ");
		scanf("%d", &length);
		printf("Enter a Width - ");
		scanf("%d", &width);
		arR = (length * width);
		printf("Area of the Rectangle = %d", arR);
	}
	else
	printf("Invalid Input");
	
	return 0;
}
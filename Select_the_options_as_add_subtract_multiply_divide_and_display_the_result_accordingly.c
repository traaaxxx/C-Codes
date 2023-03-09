//program to input any two integers and provide a menu to the user to select any of the options as add, subtract, multiply, divide and display the result accordingly

#include <stdio.h>
int main()
{
	int choice, add, subtract, multiply;
	float int1, int2, divide;
	printf("Enter two Integers - ");
	scanf("%f %f", &int1, &int2);
	
	//Display Menu
	printf("\nList of Choices -");
	printf("\n\n1: Addition");
	printf("\n2: Subtraction");
	printf("\n3: Multiplication");
	printf("\n4: Division");
	printf("\n\nSelect your preferred choice - ");
	scanf("%d", &choice);
	
	add = int1 + int2;
	subtract = int1 - int2;
	multiply = int1 * int2;
	divide = int1 / int2;
	
	if (choice == 1)
	printf("\nSum of the Integers = %d", add);
	else if (choice == 2)
	printf("\nDifference of the Integers = %d", subtract);
	else if (choice == 3)
	printf("\nProduct of the Integers = %d", multiply);
	else if (choice == 4)
	printf("\nQuotient of the Integers = %f", divide);
	else
	printf("Invalid Input");
	
	return 0;
}
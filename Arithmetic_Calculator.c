//program to prepare arithmetic calculator using switch case

#include <stdio.h>
#include <math.h>
int main()
{
	int choice;
	float int1, int2, add, subtract, multiply, divide, modulo;
	printf("Enter two Integers - ");
	scanf("%f %f", &int1, &int2);
	
	printf("\nList of Choices -");
	printf("\n1: Addition (+)");
	printf("\n2: Subtraction (-)");
	printf("\n3: Multiplication (*)");
	printf("\n4: Division (/)");
	printf("\n5: Modulo (%%)");
	printf("\n\nSelect your preferred choice - ");
	scanf("%d", &choice);
	
	add = int1 + int2;
	subtract = int1 - int2;
	multiply = int1 * int2;
	divide = int1 / int2;
	modulo = fmod(int1, int2);
	
	switch (choice)
	{
		case 1:
	      printf("\nSum of the Numbers = %f", add);
          break;
        case 2:
          printf("\nDifference of the Numbers = %f", subtract);
          break;
        case 3:
          printf("\nProduct of the Numbers = %f", multiply);
          break;
        case 4:
          printf("\nQuotient of the Numbers = %f", divide);
          break;
        case 5:
          printf("\nRemainder of the Numbers = %f", modulo);
          break;
        default:
          printf("Invalid Input");
    }
    return 0;
}

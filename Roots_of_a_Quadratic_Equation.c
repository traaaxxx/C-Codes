//program to find the roots of a Quadratic Equation

#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realpart, imgpart;
    printf("Enter the Coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
	
	discriminant = b * b - 4 * a * c;

    //condition for real and different roots
    if (discriminant > 0)
    {
    	root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoot 1 = %f \nRoot 2 = %f", root1, root2);
	}

    //condition for real and equal roots
    else if (discriminant == 0)
	{
        root1 = root2 = -b / (2 * a);
        printf("\nRoot 1 = Root 2 = %f", root1);
    }

    //if roots aren't real
    else
	{
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("\nRoot 1 = %f + %fi \nRoot 2 = %f - %fi", realpart, imgpart, realpart, imgpart);
    }

    return 0;
} 
//program to calculate the electricity bill

#include <stdio.h>
int main()
{
	int cmr, lmr, unit;
	float rate;
	printf("Enter the Current Meter Reading (CMR) - ");
	scanf("%d", &cmr);
	printf("Enter the Last Meter Reading (LMR) - ");
	scanf("%d", &lmr);
	
	unit = cmr - lmr;
	
	if (unit >= 0)
	{
		if (unit > 0 && unit <= 200)
		{
			rate = (unit * 1.50);
		}
		else if (unit >= 201 && unit <= 400)
		{
			rate = (unit * 3.50);
		}
		else if (unit >= 401 && unit <= 600)
		{
			rate = (unit * 5.50);
		}
		else
		{
			rate = (unit * 8.00);
		}
		
		printf("\nAmount Charged = Rs. %f", rate);
	}
	else
	{
		printf("\nAmount can't be negative. Please try again...");
	}
	
	return 0;
}
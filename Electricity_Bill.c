//program to calculate the electricity bill

#include <stdio.h>
int main()
{
	int bill, u;
	printf("Enter the number of units: ");
	scanf("%d", &u);
	
	if (u <= 100)
	{
		bill = u * 2;
	}
	else if (u <= 300)
	{
		bill = 100 * 2 + (u - 100) * 3;
	}
	else
	{
		bill = 100 * 2 + 200 * 3 + (u - 300) * 5;
	}
	
	printf("Amount Charged = Rs. %d", bill);
	return 0;
}              

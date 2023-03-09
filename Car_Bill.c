//program to prepare a car bill

#include <stdio.h>
int main()
{
	int c, h, m, p, q, bill;	
	printf("Enter 0(for no id card) or 1(have id card): ");
	scanf("%d", &c);
	
	if(c == 1)
	{
		printf("\nHour - ");
		scanf("%d", &h);
		printf("Minute - ");
		scanf("%d", &m);
		
		if(h >= 1)
		{
			p = h * 250;
		}
		else if(h = 5)
		{
			p = h * 1200;
		}
		if(m >= 1)
		{
			q = m * 10;
		}
		
		bill = p + q;		
		printf("Amount charged - Rs. %d", bill);
	}
	else
	{
		printf("\nNot Allowed");
		printf("\nAmount - Rs. 00.00");
	}
	 
	return 0;	
}
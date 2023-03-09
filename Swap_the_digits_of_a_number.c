//program to swap the digits of a number

#include <stdio.h>
int main() 
{
    int a[50], i, rem, rev = 0, temp, num, d = 0;
    printf("Enter the Number - ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0)
    {
    	temp = temp / 10;
    	d++;
	}
	temp = num;
	while(temp > 0)
	{
		rem = temp % 10;
		rev = (rev * 10) + rem;
		temp = temp / 10;
	}
	for(i = 0; i < d; i++)
    {
        rem = rev % 10;
        a[i] = rem;
        rev = rev / 10;
    }
    if(d == 1)
    {
        printf("\nIt's a single - digit number");
        printf("\nTo interchange the digit, enter two or more digits");
    }
    else if(d == 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
        printf("\nFirst and Last Digit Interchanged Successfully!");
        printf("\n\nNew Number is %d%d", a[0], a[1]);
    }
	else
    {
        i = 0;
        temp = a[i];
        a[i] = a[d - 1];
        a[d - 1] = temp;
        printf("\nFirst and Last Digit Interchanged Successfully!");
        printf("\n\nNew Number is ");
        for(i = 0; i < d; i++)
            printf("%d", a[i]);
    }
    getch();
    return 0;	
}
/*program using a void function name draw() to print the following,
**********************************************
Your Full Name, Roll No, Address              
*********************************************/

#include <stdio.h>
void draw()
{
	for(int i = 1; i < 50; i++)
	printf("*");
}

int main()
{
	draw();
	printf("\nSnehasis Nayak, 21051768, Cuttack, Odisha\n");
	draw();
	
	return 0;
}

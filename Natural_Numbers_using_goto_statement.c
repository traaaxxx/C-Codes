//program to print the natural numbers from 1 to 100 using goto statement

#include <stdio.h>
int main()
{
	int i = 0;
begin:
	i = i + 1;
	printf("%d ", i);

	if (i < 100)
		goto begin;
	return 0;
}

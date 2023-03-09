//program to input mark and find out grade of a student

#include <stdio.h>
int main()
{
	float mark;
	char grade;
	printf("Enter the mark of a subject: ");
	scanf("%f", &mark);
	
	if (mark>=90)
	grade = 'O';
	else if (mark>=80)
	grade = 'E';
	else if (mark>=70)
	grade = 'A';
	else if (mark>=60)
	grade = 'B';
	else if (mark>=50)
	grade = 'C';
	else if (mark>=40)
	grade = 'D';
	else
	grade = 'F';
	
	printf("\nGrade is %c", grade);
	return 0;
}
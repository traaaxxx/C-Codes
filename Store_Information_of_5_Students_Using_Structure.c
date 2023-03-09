//program to store information of 5 students using structure

#include <stdio.h>
struct student 
{
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() 
{
    int i;
    printf("Enter Information of Students -\n");

    for (i = 0; i < 5; ++i) 
	{
        s[i].roll = i + 1;
        printf("\nFor Roll Number %d,\n", s[i].roll);
        printf("Enter First Name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\n\nDisplaying Information -\n");
    for (i = 0; i < 5; ++i)
	{
        printf("\nRoll Number - %d\n", i + 1);
        printf("First Name - ");
        puts(s[i].firstName);
        printf("Marks - %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}

//program to store student details using structure

#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float mark1, mark2, mark3;
} s;

int main() 
{
    printf("Enter the Information -\n");

    printf("\nEnter a Name - ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter a Roll Number - ");
    scanf("%d", &s.roll);
    printf("\nEnter Mark 1 - ");
    scanf("%f", &s.mark1);
    printf("Enter Mark 2 - ");
    scanf("%f", &s.mark2);
    printf("Enter Mark 3 - ");
    scanf("%f", &s.mark3);
    
    printf("\n\nDisplaying Information -\n");
    printf("\nName - ");
    printf("%s", s.name);
    printf("Roll Number - %d\n", s.roll);
    printf("Mark 1 - %.1f\n", s.mark1);
    printf("Mark 2 - %.1f\n", s.mark2);
    printf("Mark 3 - %.1f\n", s.mark3);

    return 0;
}

//program to store information and display it using structure

#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
} s;

int main() 
{
    printf("Enter Information -\n\n");
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Roll Number - ");
    scanf("%d", &s.roll);
    printf("Enter Marks - ");
    scanf("%f", &s.marks);

    printf("\n\nDisplaying Information -\n\n");
    printf("Name - ");
    printf("%s", s.name);
    printf("Roll Number - %d\n", s.roll);
    printf("Marks - %.1f", s.marks);
    printf("\n");

    return 0;
}

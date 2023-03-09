//program to store employee information and display it using structure and function

#include <stdio.h>
struct Date 
{
    int dd,mm,yyyy;
};

struct employee
{
    char name[50];
    int id;
    struct Date dob;
    int salary;
} e;

int main() 
{
    printf("Enter Information -\n\n");
    printf("Enter Name: ");
    fgets(e.name, sizeof(e.name), stdin);

    printf("Enter ID - ");
    scanf("%d", &e.id);
    printf("Enter DOB (dd-mm-yyyy) - ");
    scanf("%d-%d-%d", &e.dob.dd,&e.dob.mm,&e.dob.yyyy);
    printf("Enter Salary - ");
    scanf("%f", &e.salary);

    printf("\n\nDisplaying Information -\n\n");
    printf("Name - ");
    printf("%s", e.name);
    printf("ID - %d\n", e.id);
    printf("DOB - %d-%d-%d\n", e.dob.dd,&e.dob.mm,&e.dob.yyyy);
    printf("Salary - %f", e.salary);
    printf("\n");

    return 0;
}

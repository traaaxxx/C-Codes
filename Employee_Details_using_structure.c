//program to store employee details using structure

#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
	char name[30];
	int id;
	float salary;
};

void f(struct employee e1[100])
{
    int i, h;
    for(i = 0; i < 10; i++)
	{
        cout << endl << "Details of the Employee " << i+1 << endl;
        cout << "Name - ";
        cin >> e1[i].name;
        cout << "ID - ";
        cin >> e1[i].id;
        cout << "Salary - ";
        cin >> e1[i].salary; 
    }
}

int main()
{
	struct employee e[100];
	int i, h, n;
	
	cout << "The details of 10 Employees are -" << endl;
	f(e);
	h = e[0].salary;
    for (i = 1; i < 10; i++)
	{
        if(e[i].salary > h)
        {
           h = e[i].salary;
           n = i;
        }
    }
    cout << "The details of highest salary receiver -" << endl;
    cout << "Name - " << e[n].name << endl;
    cout << "ID - " << e[n].id << endl;
    cout << "Salary - " << e[n].salary << endl;
    
    return 0;
}

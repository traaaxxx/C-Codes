//menu driven program to implement operations of a stack using array

#include<stdio.h>
#include<string.h>
#define MAX 10

int st[MAX];
int top = -1;
void push(int st[], int val);
int pop(int st[]);
void isempty();
void display(int st[]);
void main()
{
    int val, option;
    do
    {
        printf("\n\nMAIN MENU");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. ISEMPTY");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\nEnter your option - ");
        scanf("%d", &option);

        switch (option)
        {
        	case 1:
        		printf("\nEnter the number to be pushed in stack - ");
				scanf("%d", &val);
				push(st, val);
				break;
				
			case 2:
				val = pop(st);
				if (val != -1)
				{
					printf("\nThe deleted element from stack is %d", val);
				}
				break;
				
			case 3:
				isempty();
				break;
				
			case 4:
				display(st);
				break;
        }
    } while(option != 5);
}

void push(int st[], int val)
{
    if(top == (MAX - 1))
    {
    	printf("\nStack Overflow");
	}
    else
    {
        top++;
        st[top] = val;
    }
}

int pop(int st[])
{
    if(top == -1)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else
    {
        top--;
        return (st[top + 1]);
    }
}

void isempty()
{
    if(top == -1)
    {
    	printf("The stack is empty\n");
	}  
    else
    {
    	printf("The stack is not empty\n");
	}  
}

void display(int st[])
{
    int i;
    if(top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        for(i = top; i >= 0; i--)
        {
        	printf("\n%d", st[i]);
		}     
    }
}

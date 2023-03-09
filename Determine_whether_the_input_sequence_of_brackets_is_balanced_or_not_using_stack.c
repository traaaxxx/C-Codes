//program to determine whether the input sequence of brackets is balanced or not using stack

#include <stdio.h>
#include <string.h>
#define MAX 100

int stk[MAX];
int top = -1;
char pop();
void push(char);
void main()
{
    char exp[MAX];
    int temp, i, flag = 1;
    printf("\nEnter an expression - ");
    gets(exp);
    for(i = 0; i < strlen(exp); i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
        	push(exp[i]);
		}
        if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(top == -1)
            {
            	flag = 0;
			}
            else
            {
                temp = pop();
                if(exp[i] == ')' && (temp == '{' || temp == '['))
                {
                	flag = 0;
				}
                if(exp[i] == '}' && (temp == '(' || temp == '['))
                {
                	flag = 0;
				}
                if(exp[i] == ']' && (temp == '(' || temp == '{'))
                {
                	flag = 0;
				}      
            }
        }
    }
    if(top >= 0)
    {
    	flag = 0;
	}
    if(flag == 1)
    {
    	printf("\nYes , the string is balanced");
	}
    else
    {
    	printf("\n No, the string isn't balanced");
	}     
}

void push(char c)
{
    if(top == (MAX - 1))
    {
    	printf("\nStack Overflow");
	}
    else
    {
        top++;
        stk[top] = c;
    }
}

char pop()
{
    char c;
    if (top == -1)
    {
    	printf("\nStack Underflow");
	}
    else
    {
    	c = stk[top];
	}   
    top--;
    
    return c;
}

//menu driven program to implement operations of a stack using linked list

#include<stdio.h>
#include<malloc.h>

struct stack
{
    int data;
    struct stack *next;
} *ptr;

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
void isempty(struct stack *);
int main()
{
    int val, option;
    do
    {
        printf("\nMAIN MENU");
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
        		printf("\nEnter the number to be pushed on stack - ");
        		scanf("%d", &val);
        		top = push(top, val);
        		break;
        		
        	case 2:
        		top = pop(top);
        		break;
        		
        	case 3:
        		isempty(top);
        		break;
        		
        	case 4:
        		top = display(top);
        		break; 
        }
    } while(option != 5);
    
    return 0;
}

struct stack *push(struct stack *top, int val)
{
    struct stack *ptr;
    ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr -> data = val;
    if(top == NULL)
    {
        ptr -> next = NULL;
        top = ptr;
    }
    else
    {
        ptr -> next = top;
        top = ptr;
    }
    return top;
}

struct stack *display(struct stack *top)
{
    struct stack *ptr;
    ptr = top;
    if(top == NULL)
        printf("\nSTACK IS EMPTY");
    else
    {
        while(ptr != NULL)
        {
            printf("\n%d", ptr -> data);
            ptr = ptr -> next;
        }
    }
    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    ptr = top;
    if(top == NULL)
        printf("\nSTACK UNDERFLOW");
    else
    {
        top = top -> next;
        printf("\nThe value being deleted is %d", ptr -> data);
        free(ptr);
    }
    return top;
}

void isempty(struct stack *top)
{
    if(top == NULL)
    {
    	printf("The stack is empty\n");
	} 
    else
    {
    	printf("The stack is not empty\n");
	}    
}

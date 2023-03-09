//menu driven program to implement queue operations using linked list and functions

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
struct queue *front = NULL;
struct queue *rear = NULL;
struct queue *temp = NULL;
int value = 0;

void Enqueue()
{
	printf("\nEnter the value to be inserted - ");
    scanf("%d", &value);
    temp = (struct queue *)malloc(sizeof(struct queue));
    temp -> data = value;
    temp -> next = NULL;
    if(front == NULL)
	{
        front = temp;
        rear = temp;
    }
    else
	{
        rear -> next = temp;
        rear = temp;
    }
}

void Dequeue()
{
	if(front == NULL)
	{
        printf("\nQueue is Empty...\n");
    }
    else
	{
        temp = front;
        front = front -> next;
        printf("\nDeleted Element - %d", temp -> data);
        free(temp);
        printf("\n");
    }
}

void Peek()
{
	if(front == NULL)
	{
        printf("\nQueue is Empty...\n");
    }
    else
	{
        printf("\nFront Element - %d", front -> data);
        printf("\n");
    }
}

void Display()
{
	if(front == NULL)
	{
        printf("\nQueue is Empty...\n");
    }
    else
	{
        temp = front;
        while(temp != NULL)
		{
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

int main()
{
    int choice = 0;
    while(choice != 5)
    {
        printf("\n------- Queue -------");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your desired choice - ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            Enqueue();
            break;

            case 2:
            Dequeue();
            break;

            case 3:
            Peek();
            break;

            case 4:
            Display();

            case 5:
            printf("\nExiting...\n");
            break;

            default:
            printf("Invalid Input...");
            break;
        }

    }
    return 0;
}


//menu driven program to implement queue operations using static array

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int front = -1, rear = -1;
int queue[MAX];

void Enqueue()
{
	int data = 0;
	printf("\nEnter the data to be inserted - ");
	scanf("%d", &data);
	if(rear == MAX - 1)
	{
		printf("\nOVERFLOW");
		return;
	}
	if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear++;
	}
	queue[rear] = data;
	printf("\nData Inserted...\n\n");
}

void Dequeue()
{
	int data;
	if(front == -1 || rear == -1)
	{
		printf("\nUNDERFLOW");
		return;
	}
	else
	{
		data = queue[front];
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front++;
		}
		printf("\nData Deleted...\n\n");
	}
}

void Peek()
{
	if(front == -1)
	{
		printf("\nQueue is Empty...\n\n");
	}
	else
	{
		printf("\nElement in the front of the Queue is %d", queue[front]);
	}
	printf("\n\n");
}

void isFull()
{
	if(rear = MAX - 1)
	{
		printf("\nQueue is full...\n\n");
	}
	else
	{
		printf("\nQueue is not full...\n\n");
	}
}

void isEmpty()
{
	if(front = - 1)
	{
		printf("\nQueue is empty...\n\n");
	}
	else
	{
		printf("\nQueue is not empty...\n\n");
	}
}

void display()
{
	int i;
	if(rear == -1)
	{
		printf("\nEmpty Queue\n");
	}
	else
	{
		printf("\nThe Values are ");
		for(i = front; i <= rear; i++)
		{
			printf("%d ", queue[i]);
		}
	}
	printf("\n\n");
}

void main()
{
	int choice;
	while(choice != 7)
	{
		printf("------- Queue -------");
		printf("\n1. Enqueue");
		printf("\n2. Dequeue");
		printf("\n3. Peek");
		printf("\n4. Check if the queue is full");
		printf("\n5. Check if the queue is empty");
		printf("\n6. Display the list");
		printf("\n7. Exit");
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
				isFull();
				break;
			
			case 5:
				isEmpty();
				break;
			
			case 6:
				display();
				break;

			case 7:
				exit(0);
				break;
			
			default:
			printf("\nEnter a valid choice");
		}
	}
}

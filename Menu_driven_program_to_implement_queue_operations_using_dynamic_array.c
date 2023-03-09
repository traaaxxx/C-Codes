//menu driven program to implement queue operations using dynamic array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *queue;
    int front = -1;
    int rear = -1;
    int choice = 0;
    int value = 0;
    int size = 0;
    int i;
    printf("Enter the size of the queue - ");
    scanf("%d", &size);
    printf("\n");
    queue = (int *)malloc(size * sizeof(int));
    while(choice != 7)
	{
		printf("------- Queue -------");
		printf("\n1. Enqueue");
		printf("\n2. Dequeue");
		printf("\n3. Display");
		printf("\n4. Peek");
		printf("\n5. Check if the queue is empty");
		printf("\n6. Check if the queue is full");
		printf("\n7. Exit");
		printf("\nEnter your desired choice - ");
		scanf("%d", &choice);

        switch(choice)
		{
            case 1:
                printf("\nEnter the value to be inserted - ");
                scanf("%d", &value);
                if(rear == size - 1)
				{
                    printf("Queue is Full...");
                    printf("\n\n");
                }
                else
				{
                    if(front == -1)
					{
                        front = 0;
                    }
                    rear++;
                    queue[rear] = value;
                }
                printf("\n\n");
                break;
                
            case 2:
                if(front == -1)
				{
                    printf("Queue is Empty...");
                    printf("\n\n");
                }
                else
				{
                    printf("Deleted Element - %d", queue[front]);
                    front++;
                    if(front > rear)
					{
                        front = rear = -1;
                    }
                }
                printf("\n\n");
                break;
                
            case 3:
                if(front == -1)
				{
                    printf("Queue is Empty...");
                    printf("\n\n");
                }
                else
				{
                    for(i = front; i <= rear; i++)
					{
                        printf("%d ", queue[i]);
                    }
                }
                printf("\n\n");
                break;
                
            case 4:
                if(front == -1)
				{
                    printf("Queue is Empty...");
                    printf("\n\n");
                }
                else
				{
                    printf("Element at the front of the queue is %d", queue[front]);
                }
                printf("\n\n");
                break;
                
            case 5:
                if(front == -1)
				{
                    printf("\nQueue is Empty...");
                    printf("\n");
                }
                else
				{
                    printf("\nQueue isn't Empty...");
                }
                printf("\n\n");
                break;
                
            case 6:
                if(rear == size - 1)
				{
                    printf("\nQueue is Full...");
                    printf("\n");
                }
                else
				{
                    printf("\nQueue isn't Full...");
                }
                printf("\n\n");
                break;
                
            case 7:
                printf("\nExiting...");
                break;
                
            default:
                printf("\nInvalid Choice...");
        }
    }
    
    return 0;
}

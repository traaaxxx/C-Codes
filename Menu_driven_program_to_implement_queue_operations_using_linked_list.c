//menu driven program to implement queue operations using linked list

#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct queue
	{
        int data;
        struct queue *next;
    };
    struct queue *front = NULL;
    struct queue *rear = NULL;
    struct queue *temp = NULL;
    int choice = 0;
    
    int value = 0;
    while(choice != 6)
	{
        printf("------- Queue -------");
		printf("\n1. Enqueue");
		printf("\n2. Dequeue");
		printf("\n3. Display");
		printf("\n4. Peek");
		printf("\n5. Check if the queue is empty");
		printf("\n6. Exit");
		printf("\nEnter your desired choice - ");
		scanf("%d", &choice);

        switch(choice)
		{
            case 1:
                printf("Enter the value to be inserted - ");
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
                break;
                
            case 2:
                if(front == NULL)
				{
                    printf("Queue is Empty...");
                }
                else
				{
                    temp = front;
                    front = front -> next;
                    printf("Deleted Element - %d", temp -> data);
                    free(temp);
                }
                break;
                
            case 3:
                if(front == NULL)
				{
                    printf("Queue is Empty...");
                }
                else
				{
                    temp = front;
                    while(temp != NULL)
					{
                        printf("%d ", temp -> data);
                        temp = temp -> next;
                    }
                }
                break;
                
            case 4:
                if(front == NULL)
				{
                    printf("Queue is Empty...");
                }
                else
				{
                    printf("Front Element - %d", front -> data);
                }
                break;
                
            case 5:
                if(front == NULL)
				{
                    printf("Queue is Empty...");
                }
                else
				{
                    printf("Queue isn't Empty...");
                }
                break;
                
            case 6:
                printf("Exiting...");
                break;
                
            default:
                printf("Invalid Choice...");
        }
    }

    return 0;
}

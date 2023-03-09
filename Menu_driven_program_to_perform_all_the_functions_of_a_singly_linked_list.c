//menu driven program to perform all the functions of a singly linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;

void begin_insert()
{
	struct node *ptr;
	int n;
	ptr = malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter the value - ");
		scanf("%d", &n);
		ptr -> data = n;
		ptr -> next = head;
		head = ptr;
		printf("\nNode Inserted...\n\n");
	}
	printf("\n");	
}

void last_insert()
{
	struct node *ptr, *temp;
	int n;
	ptr = malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter the value - ");
		scanf("%d", &n);
		ptr -> data = n;
		if(head == NULL)
		{
			ptr -> next = NULL;
			head = ptr;
			printf("\nNode Inserted...\n\n");
		}
		else
		{
			temp = head;
			while(temp -> next != NULL)
			{
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> next = NULL;
			printf("\nNode Inserted...\n\n");
		}
	}
	printf("\n");	
}

void random_insert()
{
	struct node *ptr, *temp;
	int i, n, pos;
	ptr = malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter the position after which you want to insert - ");
		scanf("%d", &pos);
		printf("\nEnter the value - ");
		scanf("%d", &n);
		ptr -> data = n;
		temp = head;
		for(i = 0; i < pos; i++)
		{
			temp = temp -> next;
			if(temp == NULL)
			{
				printf("\nCan't insert...");
				return;
				printf("\n\n");
			}
		}
		ptr -> next = temp -> next;
		temp -> next = ptr;
		printf("\nNode Inserted...\n\n");
	}
}

void begin_delete()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("\nList is Empty...");
		printf("\n\n");
	}
	else if(head -> next == NULL)
	{
		head = NULL;
		free(head);
		printf("\nNode deleted from the beginning...");
	}
	else
	{
		temp = head;
		head = temp -> next;
		free(temp);
		temp = NULL;
		printf("\nNode deleted from the beginning...");
	}	
}

void last_delete()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("\nList is Empty...");
		printf("\n\n");
	}
	else if(head -> next == NULL)
	{
		head = NULL;
		free(head);
		printf("\nOnly node of the list deleted...");
		printf("\n\n");
	}
	else
	{
		temp = head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp);
		temp = NULL;
		printf("\nLast node of the list has been deleted...");
		printf("\n\n");
	}
}

void random_delete()
{
	struct node *ptr, *temp;
	int i, pos;
	printf("\nEnter the position at which you want to delete - ");
	scanf("%d", &pos);
	temp = head;
	ptr = temp -> next;
	for(i = 1; i < (pos - 1); i++)
	{
		temp = temp -> next;
		ptr = ptr -> next;
	}
	temp -> next = ptr -> next;
	free(ptr);
	printf("\nNode Deleted...");
	printf("\n\n");
}

void count()
{
	struct node *temp;
	int ctr = 0;
	printf("\n");
	temp = head;
	if(temp == NULL)
	{
		printf("\nNothing to print");
		printf("\n\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("-> %d ", temp -> data);
			temp = temp -> next;
			ctr++;
		}
		printf("\n\nNumber of nodes in the Linked List are %d", ctr);
	}
	printf("\n\n");
}

void display()
{
	struct node *ptr;
	ptr = head;
	if(ptr == NULL)
	{
		printf("\nNothing to print");
		printf("\n\n");
	}
	else
	{
		printf("\nThe Values are...\n");
		while(ptr != NULL)
		{
			printf("-> %d ", ptr -> data);
			ptr = ptr -> next;
		}
	}
	printf("\n\n");
}

void main()
{
	int choice = 0;
	while(choice != 9)
	{
		printf("------- Singly Linked List -------");
		printf("\n1. Insert node at the beginning");
		printf("\n2. Insert node at the end");
		printf("\n3. Insert node from a specified position");
		printf("\n4. Delete node at the beginning");
		printf("\n5. Delete node at the end");
		printf("\n6. Delete node from a specified position");
		printf("\n7. Count the number of nodes in the list");
		printf("\n8. Display the list");
		printf("\n9. Exit");
		printf("\nEnter your desired choice - ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				begin_insert();
				break;
			
			case 2:
				last_insert();
				break;
			
			case 3:
				random_insert();
				break;
			
			case 4:
				begin_delete();
				break;
			
			case 5:
				last_delete();
				break;
			
			case 6:
				random_delete();
				break;
			
			case 7:
				count();
				break;
			
			case 8:
				display();
				break;
				
			case 9:
				exit(0);
				break;
			
			default:
			printf("\nEnter a valid choice");	
		}	
	}	
}

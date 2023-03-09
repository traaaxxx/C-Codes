//program to create a doubly linked list and display it

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*head, *temp;

void create(int n)
{
	int i, data;
	struct node *new_node;
	
	if(n >= 1)
	{
		head = (struct node*)malloc(sizeof(struct node));
		if(head != NULL)
		{
			printf("Enter the data of Node 1 - ");
			scanf("%d", &data);
			
			head -> data = data;
			head -> prev = NULL;
			head -> next = NULL;
			
			temp = head;
			
			for(i = 2; i <= n; i++)
			{
				new_node = (struct node*)malloc(sizeof(struct node));
				
				if(new_node != NULL)
				{
					printf("Enter the data of Node %d - ", i);
					scanf("%d", &data);
					
					new_node -> data = data;
					new_node -> prev = temp;
					new_node -> next = NULL;
					
					temp -> next = new_node;
					temp = new_node;
				}
				else
				{
					printf("\nUnable to allocate memory...");
					break;
				}
			}
			printf("\nDoubly Linked List Created Successfully");
		}
		else
		{
			printf("\nUnable to allocate memory...");
		}
	}	
}

void display()
{
	struct node *temp;
	int n = 1;
	
	if(head == NULL)
	{
		printf("\nThe List is empty...");
	}
	else
	{
		temp = head;
		printf("\n\nThe Data in the List -\n");
		
		while(temp != NULL)
		{
			printf("Data of Node %d - %d\n", n++, temp -> data);
			temp = temp -> next;
		}
	}	
}

int main()
{
	int n, d;
	head = NULL;
	temp = NULL;
	
	printf("Enter the number of nodes to create - ");
	scanf("%d", &n);
	create(n);
	display();
	
	return 0;
}

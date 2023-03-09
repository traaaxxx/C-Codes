//program to reverse a doubly linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*head, *last;

void create(int n)
{
	int i, data;
	struct node *new_node;
	
	if(n >= 1)
	{
		head = (struct node*)malloc(sizeof(struct node));
		printf("Enter data of Node 1 - ");
		scanf("%d", &data);
		
		head -> data = data;
		head -> prev = NULL;
		head -> next = NULL;
		
		last = head;
		
		for(i = 2; i <= n; i++)
		{
			new_node = (struct node*)malloc(sizeof(struct node));
			printf("Enter data of Node %d - ", i);
			scanf("%d", &data);
			
			new_node -> data = data;
			new_node -> prev = last;
			new_node -> next = NULL;
			
			last -> next = new_node;
			last = new_node;
		}
		printf("\n------- Doubly Linked List Created Successfully -------");
	}
}

void reverse()
{
	struct node *current, *temp;
	current = head;
	while(current != NULL)
	{
		temp = current -> next;
		current -> next = current -> prev;
		current -> prev = temp;
		current = temp;
	}
	temp = head;
	head = last;
	last = temp;
	
	printf("\n------- List Reversed Successfully -------");
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
		printf("\nThe Data in the List -\n");
		
		while(temp != NULL)
		{
			printf("Data of Node %d - %d\n", n, temp -> data);
			n++;
			temp = temp -> next;
		}
	}	
}

int main()
{
	int n, data, choice = 1;
	head = NULL;
	last = NULL;
	
	while(choice != 0)
	{
		printf("------- Doubly Linked List -------");
		printf("\n\n1. Create a List");
		printf("\n2. Reverse the List");
		printf("\n3. Display the List");
		printf("\n0. Exit");
		printf("\n\nEnter your choice - ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the total number of nodes - ");
				scanf("%d", &n);
				create(n);
				break;
			
			case 2:
				reverse();
				break;
			
			case 3:
				display();
				break;
				
			case 0:
				break;
				
			default:
				printf("Invalid Input...");
		}
		printf("\n\n");
	}
	return 0;
}

//program to find the middle node of the linked list

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next;
};

void print_middle(struct node *head)
{
	struct node *first_ptr = head;
	struct node *second_ptr = head;
	int c = 1;
	if(head != NULL)
	{
		while(second_ptr != NULL && second_ptr -> next != NULL)
		{
			second_ptr = second_ptr -> next -> next;
			c++;
			first_ptr = first_ptr -> next;
		}
		printf("\n\nThe middle element in the linked list is %d\nIts in the position - %d", first_ptr -> data, c);
	}
}

void traverse(struct node *ptr)
{
	while(ptr != 0)
	{
		printf("-> %d ", ptr -> data);
		ptr = ptr -> next;
	}
}

int main()
{
	struct node *prev, *head = NULL, *p;
	int i, n, d;
	printf("Enter the number of elements in the linked list - ");
	scanf("%d", &n);
	srand(time(0));
	for(i = 1; i <= n; i++)
	{
		p = (struct node*)malloc(sizeof(struct node));
		p -> data = rand() % 100;
		p -> next = NULL;
		if(head == NULL)
		{
			head = p;
		}
		else
		{
			prev -> next = p;
		}
		prev = p;
	}
	printf("\nEntered Linked List - ");
	traverse(head);
	print_middle(head);
	
	return 0;
}

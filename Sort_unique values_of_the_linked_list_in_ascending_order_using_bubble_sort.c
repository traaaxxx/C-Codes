//program to sort unique values of the linked list in ascending order using bubble sort

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next;
};

struct node *sort(struct node *ptr)
{
	int z;
	struct node *temp = ptr;
	while(temp -> next != NULL)
	{
		ptr = temp -> next;
		while(ptr != NULL)
		{
			if(temp -> data > ptr -> data)
			{
				z = temp -> data;
				temp -> data = ptr -> data;
				ptr -> data = z;
			}
			ptr = ptr -> next;
		}
		temp = temp -> next;
	}
}

void traverse(struct node *ptr)
{
	while(ptr != NULL)
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
	printf("\nLinked List after sorting - ");
	sort(head);
	traverse(head);
}

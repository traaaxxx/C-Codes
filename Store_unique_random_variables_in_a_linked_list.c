//program to create n nodes singly linked list to store unique random values in the range 1 to 100 and store the node position in every node of linked list

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
	int data;
	int node;
	struct node *next;
};

void traverse(struct node *ptr)
{
	int count;
	printf("\nThe Linked List is ");
	while(ptr != NULL)
	{
		printf("-> %d ", ptr -> data);
		count++;
		ptr = ptr -> next;
	}
	printf("\n\nNumber of nodes present is %d\n", count);
}

void node(struct node *ptr)
{
	printf("\nDisplaying node number for each data stored - \n");
	while(ptr != NULL)
	{
		printf("%d - %d\n", ptr -> data, ptr -> node);
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
		p -> node = i;
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
	traverse(head);
	node(head);
	
	return 0;
}

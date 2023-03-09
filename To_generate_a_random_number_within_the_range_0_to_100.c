//program to generate a random number within the range 0 to 100

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL, *newnode, *temp = NULL;

void insert()
{
	int i, n;
	printf("How many node(s) you want? ");
	scanf("%d", &n);
	srand(time(0));
	for(i = 0; i < n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode -> data = (rand() % (100 + 1));
		newnode -> next = NULL;
		if(head == NULL)
		{
			head = newnode;
		}
		else
		{
			temp = head;
			while(temp -> next != NULL)
			{
				temp = temp -> next;
			}
			temp -> next = newnode;
		}
	}
}

void search()
{
	int choice, count = 1, i = 1;
	choice = rand() % 101;
	printf("\n\nThe number to be searched - %d\n", choice);
	while(temp -> next != NULL)
	{
		if(temp -> data == choice)
		{
			printf("\nKey found...\n");
			i = 0;
			break;
		}
		temp = temp -> next;
		count++;
	}
	if(i == 0)
	{
		printf("\nNode Number - %d\n", count);
	}
	else
	{
		printf("\nKey not found...");
	}
}

void display()
{
	struct node *it = head;
	while(it != NULL)
	{
		printf("-> %d ", it -> data);
		it = it -> next;
	}
}

int main()
{
	insert();
	printf("\nEntered List -\n");
	display();
	temp = head;
	search();
}

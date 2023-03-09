//program to create a linked list and display it also find the largest and the smallest digits

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
	int data;
    struct node *n, *link;
};

struct node *create()
{
    struct node *ptr = NULL;
    int length, i;
    printf("\nEnter the size of the list - ");
    scanf("%d", &length);
    struct node *new, *temp;
    for(i = 0; i < length; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the Elements - ");
        scanf("%d", &new -> data);
        new -> n = NULL;
        if(ptr == NULL)
        {
            ptr = temp = new;
        }
        else
        {
            temp -> n = new;
            temp = new;
        }
    }
    return ptr;
}

void display(struct node *head)
{
    printf("The list is - ");
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> n;
    }
    temp = head;
    printf("\n");
}

int largest(struct node *ptr)
{
        int large = ptr -> info;
        while(ptr != NULL)
        {
                if(ptr -> info > large)
                {
                	large = ptr -> info;
				}       
                ptr = ptr -> link;
        }
        return large;
}

int smallest(struct node *ptr)
{
        int small = ptr -> info;
        while(ptr != NULL)
        {
                if(ptr -> info < small)
                {
                	small = ptr -> info;
				}        
                ptr = ptr -> link;
        }
        return small;
}

int main()
{
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    int choice;

    while (1)
    {
    	printf("\n");
    	printf("---------- MENU ----------\n");
        printf("1. Create a linked list\n");
        printf("2. Display the list\n");
        printf("3. Largest Number\n");
        printf("4. Smallest Number\n");
        printf("5. Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            list1 = create(list1);
            break;

        case 2:
            display(list1);
            break;
            
        case 3:
        	
        	
        case 4:
        	

        case 5:
        exit(0);    
        }
    }

    return 0;
}

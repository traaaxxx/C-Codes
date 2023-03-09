//program to create a circular linked list and display user defined functions

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};  
struct node *prev,*head=NULL,*p,*last;
int n;
void create()
{
    int i;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);
    struct node *newNode;
    srand(time(0));
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        if(head != NULL)
        {
            head->data = rand()%100;
            head->prev = NULL;
            head->next = head;
            last = head;
            for(i=0; i<(n-1); i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));
                if(newNode != NULL)
                {
                    newNode->data = rand()%100;
                    newNode->prev = last; 
                    newNode->next = head;
                    last->next = newNode;
                    last = newNode; 
                }
            }
            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
    }
}
void displayListFromFirst()
{
   struct node* ptr=head;
    do
    {
       printf("->%d",ptr->data); 
       ptr=ptr->next;
    }
    while(ptr!=head);
}
void displayListFromFirstNext()
{
    struct node* ptr=head->next;
    do
    {
       printf("->%d",ptr->data); 
       ptr=ptr->next;
    }
    while(ptr!=head->next);
    
}
void displayListFromEnd()
{
    struct node * p=last;
        while(p != NULL)
        {
            printf("->%d",p->data);
            p = p->prev; 
        }
}
int main()
{
    create();
    printf("\n\nDATA IN THE LIST FROM FIRST -:\n");
    displayListFromFirst();
    printf("\n\nDATA IN THE LIST FROM FIRST NEXT -:\n");
    displayListFromFirstNext();
    printf("\n\nDATA IN THE LIST FROM END -:\n");    
    displayListFromEnd();
    printf("\n\nHENCE IT IS PROVED THAT IT IS A DOUBLY CIRCULAR LINKED LIST");
    printf("\n\n");
    return 0;
}

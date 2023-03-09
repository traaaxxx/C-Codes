//menu driven program in a doubly lnked list

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node 
{
    int data;
    struct node * prev;
    struct node * next;
}*head, *tail;

int n;
void createList()
{
    int i;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);
    struct node *ptr;
    srand(time(0));
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        if(head != NULL)
        {
            head->data = rand()%100;
            head->prev = NULL;
            head->next = NULL;
            tail = head;
            for(i=1; i<n; i++)
            {
                ptr = (struct node *)malloc(sizeof(struct node));
                if(ptr != NULL)
                {
                    ptr->data = rand()%100;
                    ptr->prev = tail; 
                    ptr->next = NULL;
                    tail->next = ptr;
                    tail = ptr; 
                }
                
            }
            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
    }
    else if(n==1)
    {
        printf("\n->%d",head->data);
    }
    else if(n<1)
    {
        printf("\nList cannot be created\n");
    }
}
struct node* displayListFromFirst()
{
    struct node * p=head;
    while(p!=NULL)
    {
        printf("\nDATA IN THE LIST FROM FRONT -:\n");
        while(p != NULL)
        {
            printf("->%d",p->data);
            p = p->next;
        }
    }
}
struct node* displayListFromEnd()
{
    struct node * p=tail;
    
    while(p!=NULL)
    {
        printf("\nDATA IN THE LIST FROM END -:\n");
        while(p != NULL)
        {
            printf("->%d",p->data);
            p = p->prev; 
        }
    }
}
struct node* add_first()
{
    int d;
    printf("\n\nEnter data to add at the first - \n");
    scanf("%d",&n);
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=head;
    p->prev=head->prev;
    head=p;
    printf("\n\nList after entering %d at the first is - ",n);
    return head;
}
struct node* add_end()
{
    int d;
    printf("\n\nEnter data to add at the end - \n");
    scanf("%d",&d);
    struct node* p=(struct node*)malloc(sizeof(struct node)),*q=head;
    p->data=d;
    p->next=NULL;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=p;
    p->prev=q;
    tail=p;
    printf("\n\nList after entering %d at the end is - ",n);
    return tail;
}
struct node* add_any()
{
    int d,pos,i=1;
    printf("\n\nEnter position to add at the data - \n");
    scanf("%d",&pos);
    if(pos==1)
    {
        head=add_first();
        displayListFromFirst();        
    }else if(pos>1)
    {
    printf("\n\nEnter data to add at the position %d  - \n",pos);
    scanf("%d",&d);
    struct node* p=(struct node*)malloc(sizeof(struct node)),*q=head;
    p->data=d;
    while(i!=(pos-1))
    {
        q=q->next;
        i++;
    }
    p->next=q->next;
    p->prev=q;
    q->next=p;
    p->next->prev=p;
    }
    printf("\n\nList after entering %d at node-%d is - \n",d,pos);
}
struct node* delete_first()
{
    struct node *p=head;
    p->next->prev=NULL;
    head=p->next;
    free(p);
    printf("\n\nList after deleting first node is - \n");
    return head;
}
struct node* delete_end()
{
    struct node *p=head,*q=head->next;
    while(p->next->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    printf("\n\nList after deleting tail node is - \n");
}
struct node* delete_any()
{
    int pos,i=1;
    printf("\n\nEnter node number whose data is to be deleted - \n");
    scanf("%d",&pos);
    if(pos==1)
    {
        head=delete_first();
        displayListFromFirst();        
    }else if(pos>1)
    {
    struct node *p=head,*q=head->next;
    while(i!=(pos-1))
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    q->next->prev=p;
    free(q);
    }
    printf("\n\nList after deleting data at node-%d is - \n",pos);
}
struct node *check_empty()
{
    if(head==NULL)
    {
        printf("\n\nThe list is EMPTY\n");
    }
    else
    {
        printf("\n\nThe list is not EMPTY\n");
    }
}
struct node* delete_key()
{
    int key;
    printf("\nEnter the data from the above linked list which you want to delete -: ");
    scanf("%d",&key);
    struct node * p=head;
    while(p!=NULL)
    {
        printf("\nDATA IN THE LIST FROM FRONT -:\n");
        while(p != NULL)
        {
            if(p->data==key)
            {
                p->prev->next=p->next;
                p->next->prev=p->prev;
                free(p);
            }
            else if(p->data!=key)
            {
              printf("->%d",p->data);
            }
            p = p->next;
        }
    }
}
struct node* count()
{
    struct node * p=head;
    int count=0;
        while(p != NULL)
        {
            count++;
            p = p->next;
        }
    printf("\n\nTotal number of nodes in the linked list is :- %d\n",count);
}
struct node* search()
{
    struct node * p=head;
    int key,count=1,i=0;
    printf("\n\nEnter the element to be searched in the list :- ");
    scanf("%d",&key);
        while(p != NULL)
        {
            if(p->data==key)
            {
                i=1;
                printf("The element-%d is found in the linked list at the node number-%d\n",key,count);
                break;
                
            }
            count++;
            p = p->next;
        }
        if(i==0)
        printf("\n\nElement not Found\n\n");
}
int main()
{
    int choice;
    again:
    { 
    printf("\n\n\tEnter your Choice -\t\n\n");
    printf("\t 1. TO CREATE THE LINKED LIST\n");
    printf("\t 2. TO PRINT FROM FIRST TO END\n");
    printf("\t 3. TO PRINT FROM END TO FIRST\n");
    printf("\t 4. TO CHECK THE LIST IS EMPTY OR NOT\n");
    printf("\t 5. TO ADD AN ELEMENT AT THE BEGINNING\n");
    printf("\t 6. TO ADD AN ELEMENT AT THE END\n");
    printf("\t 7. TO ADD AN ELEMENT AT ANY POSITION\n");
    printf("\t 8. TO DELETE FIRST ELEMENT\n");
    printf("\t 9. TO DELETE LAST ELEMENT\n");
    printf("\t10. TO DELETE AN ELEMENT AT ANY POSITION\n");
    printf("\t11. TO DELETE A PARTICUALR KEY\n");
    printf("\t12. TO COUNT THE NUMBER OF NODES\n");
    printf("\t13. TO SEARCH FOR AN ELEMENT IN THE DATA\n");
    printf("\t14. TO END THE PROGRAM\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:createList();
        goto again;
        break;
        
        case 2:displayListFromFirst();
        goto again;
        break;
        
        case 3:displayListFromEnd();
        goto again;
        break;
        
        case 4:check_empty();
        goto again;
        break;
        
        case 5:head=add_first();
        displayListFromFirst();
        goto again;
        break;
        
        case 6:tail=add_end();
        displayListFromFirst();
        displayListFromEnd();
        printf("->%d",head->data);
        goto again;
        break;
        
        case 7:add_any();
        displayListFromFirst();
        goto again;
        break;
        
        case 8:head=delete_first();
        displayListFromFirst();
        goto again;
        break;
        
        case 9:delete_end();
        displayListFromFirst();
        goto again;
        break;
        
        case 10:delete_any();
        displayListFromFirst();
        goto again;
        break;
        
        case 11:delete_key();
        goto again;
        break;
        
        case 12:count();
        goto again;
        break;
       
        case 13:search();
        goto again;
        break;
        case 14:goto end;
        
        default:printf("\nINVALID INPUT\nPLEASE ENTER A VALID INPUT AGAIN - \n\n");
        goto again;
        break;
        
    }
    }
    end:
    {
    return 0;
    }
}

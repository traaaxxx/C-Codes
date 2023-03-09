//menu driven program to implement circular queue operations using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;

void enqueue(int d)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n -> data = d;
    n -> next = NULL;
    if ((r == NULL) && (f == NULL))
	{
        f = r = n;
        r -> next = f;
    }
    else
	{
        r -> next = n;
        r = n;
        n -> next = f;
    }
}

void dequeue()
{
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
        printf("\nQUEUE IS EMPTY");
    else if (f == r)
	{
        f = r = NULL;
        free(t);
    }
    else
	{
        f = f -> next;
        r -> next = f;
        free(t);
    }
}

void print()
{
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
        printf("\nQUEUE IS EMPTY");
    else
	{
        do
		{
            printf("\n%d", t -> data);
            t = t -> next;
        } while (t != f);
    }
}

int main()
{
    int c, n, i, data;
    printf("\nENTER YOUR CHOICE - ");
    do
	{
        printf("\n1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE - ");
        scanf("%d", &c);
        switch (c)
		{
        case 1:
            printf("\nENTER THE NUMBER OF ELEMENTS - ");
            scanf("%d", &n);
            printf("\nENTER ELEMENT - ");
            i = 0;
            while (i < n)
			{
                scanf("%d", &data);
                enqueue(data);
                i++;
            }
            break;
            
        case 2:
            dequeue();
            break;
            
        case 3:
            print();
            break;
            
        case 4:
            break;
            
        default:
            printf("\nWRONG CHOICE");
        }
    } while (c != 4);
    return 0;
}

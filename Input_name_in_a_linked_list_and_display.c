//program to create linked list, input name and display it

#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
}*temp, *end;

void traverse(struct node *start)
{
    while(start)
    {
        printf("\nENTERED DATA = %c", start -> data);
        start = start -> next;
    }
}

struct node *input(struct node *start, int n)
{
    start = malloc(sizeof(struct node));
    printf("\nINPUT NAME: ");
    scanf("%c", &start -> data);
    scanf("%c", &start -> data);
    start -> next = NULL;
    temp = start;
    int i;
    for (i = 1; i < n; i++)
    {
        end = malloc(sizeof(struct node));
        printf("INPUT NAME: ");
        scanf("%c", &end -> data);
        scanf("%c", &end -> data);
        end -> next = NULL;
        temp -> next = end;
        temp = temp -> next;
    }
    return start;
}

int main()
{
    int n, check;
    printf("Input the length of your name - ");
    scanf("%d", &n);
    struct node *start = malloc(sizeof(struct node));
    start = input(start, n);
    traverse(start);
    return 0;
}

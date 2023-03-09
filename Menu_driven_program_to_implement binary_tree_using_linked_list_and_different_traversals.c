//menu driven program to implement binary tree using linked list and different traversals

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = item;
    temp -> left = temp -> right = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root -> left);
        printf("%d ", root -> data);
        inorder(root -> right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root -> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root -> left);
        postorder(root -> right);
        printf("%d ", root -> data);
    }
}

int main()
{
    struct node *root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    int c;
    do
    {
        printf("\n\n1. In - Order");
        printf("\n2. Pre - Order");
        printf("\n3. Post - Order");
        printf("\n4. Exit");
        printf("\nEnter your choice - ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("\nInorder Traversal of binary tree is - ");
            inorder(root);
            break;

        case 2:
            printf("\nPreorder Traversal of binary tree is - ");
            preorder(root);
            break;

        case 3:
            printf("\nPostorder Traversal of binary tree is - ");
            postorder(root);
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Wrong Choice");
        }
    } while (c != 0);

    return 0;
}

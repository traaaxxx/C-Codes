//menu driven program to implement operations in the binary search tree

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

void create_node(struct node **root, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
    *root = temp;
}

void insert_node(struct node **root, int data)
{
    if (*root == NULL)
    {
        create_node(root, data);
    }
    else
    {
        if (data < (*root) -> data)
        {
            insert_node(&(*root) -> left, data);
        }
        else
        {
            insert_node(&(*root) -> right, data);
        }
    }
}

void pre_order(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root -> data);
        pre_order(root -> left);
        pre_order(root -> right);
    }
}

void in_order(struct node *root)
{
    if (root != NULL)
    {
        in_order(root -> left);
        printf("%d ", root -> data);
        in_order(root -> right);
    }
}

void post_order(struct node *root)
{
    if (root != NULL)
    {
        post_order(root -> left);
        post_order(root -> right);
        printf("%d ", root -> data);
    }
}

void search(struct node *root, int data)
{
    if (root == NULL)
    {
        printf("\nElement not found");
    }
    else if (root -> data == data)
    {
        printf("\n%d was found",data);
    }
    else if (data < root -> data)
    {
        search(root -> left, data);
    }
    else
    {
        search(root -> right, data);
    }
}

void smallest(struct node *root)
{
    if (root == NULL)
    {
        printf("\nTree is empty");
    }
    else if (root -> left == NULL)
    {
        printf("\nSmallest element is %d ", root -> data);
    }
    else
    {
        smallest(root -> left);
    }
}

void largest(struct node *root)
{
    if (root == NULL)
    {
        printf("\nTree is empty");
    }
    else if (root -> right == NULL)
    {
        printf("\nLargest element is %d", root -> data);
    }
    else
    {
        largest(root -> right);
    }
}

void delete_tree(struct node *root)
{
    if (root != NULL)
    {
        delete_tree(root -> left);
        delete_tree(root -> right);
        free(root);
    }
}

int main()
{
    struct node *root = NULL;
    int choice, data, n;
    do
    {
        printf("\n\n---------- Binary Search Tree Menu ----------");
        printf("\n1. Create");
        printf("\n2. In - Order Traversal");
        printf("\n3. Pre - Order Traversal");
        printf("\n4. Post - Order Traversal");
        printf("\n5. Search");
        printf("\n6. Smallest Element");
        printf("\n7. Largest Element");
        printf("\n8. Deletion of Tree");
        printf("\n9. Exit");
        printf("\nEnter your choice - ");
        scanf("%d", &choice);
        int i;
        switch (choice)
        {
        case 1:
        	printf("\nEnter number of data - ");
            scanf("%d", &n);
            
            printf("\nEnter the data - ");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &data);
                insert_node(&root, data);
            }
            break;
            
        case 2:
            printf("\nIn - Order Traversal - ");
            in_order(root);
            printf("\n");
            break;
            
        case 3:
            printf("\nPre - Order Traversal - ");
            pre_order(root);
            printf("\n");
            break;
            
        case 4:
            printf("\nPost - Order Traversal - ");
            post_order(root);
            printf("\n");
            break;
            
        case 5:
            printf("\nEnter the data to be searched - ");
            scanf("%d", &data);
            search(root, data);
            break;
            
        case 6:
            smallest(root);
            printf("\n");
            break;
            
        case 7:
            largest(root);
            printf("\n");
            break;
            
        case 8:
            delete_tree(root);
            printf("\nTree Deleted");
            printf("\n");
            break;
            
        case 9:
            printf("\nExiting...");
            printf("\n");
            break;
            
        default:
            printf("\nInvalid Choice");
            printf("\n");
            break;
        }
    } while (choice != 9);
}

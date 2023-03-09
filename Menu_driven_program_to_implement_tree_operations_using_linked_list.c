//menu driven program to create binary tree and implement tree operations using linked list

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

int leaf_count(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root -> left == NULL && root -> right == NULL)
    {
        return 1;
    }
    else
    {
        return leaf_count(root -> left) + leaf_count(root -> right);
    }
}

int non_leaf_count(struct node *root)
{
    if (root == NULL || (root -> left == NULL && root -> right == NULL))
    {
        return 0;
    }
    else
    {
        return 1 + non_leaf_count(root -> left) + non_leaf_count(root -> right);
    }
}

int total_count(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + total_count(root -> left) + total_count(root -> right);
    }
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int left_height = height(root -> left);
        int right_height = height(root -> right);
        if (left_height > right_height)
        {
            return left_height + 1;
        }
        else
        {
            return right_height + 1;
        }
    }
}

int sum(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return root -> data + sum(root -> left) + sum(root-> right);
    }
}

int min(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int left_min = min(root -> left);
        int right_min = min(root -> right);
        if (left_min < right_min)
        {
            if (left_min < root -> data)
            {
                return left_min;
            }
            else
            {
                return root -> data;
            }
        }
        else
        {
            if (right_min < root -> data)
            {
                return right_min;
            }
            else
            {
                return root -> data;
            }
        }
    }
}

int max(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int left_max = max(root -> left);
        int right_max = max(root -> right);
        if (left_max > right_max)
        {
            if (left_max > root -> data)
            {
                return left_max;
            }
            else
            {
                return root -> data;
            }
        }
        else
        {
            if (right_max > root -> data)
            {
                return right_max;
            }
            else
            {
                return root -> data;
            }
        }
    }
}

int main()
{
    struct node *root = NULL;
    int choice, data;
    while (1)
    {
    	printf("\n\n---------- MENU ----------");
        printf("\n1. Insert");
        printf("\n2. Leaf Count");
        printf("\n3. Non - Leaf Count");
        printf("\n4. Total Count");
        printf("\n5. Height");
        printf("\n6. Sum");
        printf("\n7. Minimum");
        printf("\n8. Maximum");
        printf("\n9. Exit");
        printf("\nEnter your choice - ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the data - ");
            scanf("%d", &data);
            insert_node(&root, data);
            break;
            
        case 2:
            printf("\nLeaf Count - %d", leaf_count(root));
            break;
            
        case 3:
            printf("\nNon - Leaf Count - %d", non_leaf_count(root));
            break;
            
        case 4:
            printf("\nTotal Count - %d", total_count(root));
            break;
            
        case 5:
            printf("\nHeight - %d", height(root));
            break;
            
        case 6:
            printf("\nSum - %d", sum(root));
            break;
            
        case 7:
            printf("\nMinimum - %d", min(root));
            break;
            
        case 8:
            printf("\nMaximum - %d", max(root));
            break;
            
        case 9:
            exit(0);
            
        default:
            printf("\nInvalid Choice");
        }
    }
    
    return 0;
}

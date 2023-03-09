//menu driven program to implement circular queue operations using static array

#include<stdio.h>
#include<stdlib.h>

int circularQueue[10];
int front = -1, back = -1, n = 10;

void isEmpty()
{
    if (front == -1)
    {
        printf("QUEUE EMPTY");
    }
}

void isFull()
{
    if ((front == 0 && back == n - 1) || (front == back + 1))
    {
        printf("SIZE FULL\n");
    }
}

void enqueue(int number)
{
    if ((front == 0 && back == n - 1) || (front == back + 1))
	{
        printf("SIZE FULL\n");
        return;
    }
    if (front == -1)
	{
        front = 0;
        back = 0;
    }
    else
	{
        if (back == n - 1)
            back = 0;
        else
            back = back + 1;
    }
    circularQueue[back] = number;
}

void dequeue()
{
    if (front == -1)
	{
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    printf("ELEMENT DELETED IS %d ", circularQueue[front]);
    if (front == back)
	{
        front = -1;
        back = -1;
    }
    else
	{
        if (front == n - 1)
            front = 0;
        else
            front = front + 1;
    }
}

void Peek()
{
    if (front == -1)
	{
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    printf("PEEK ELEMENT IS %d ", circularQueue[front]);
}

void display()
{
    int f = front, r = back;
    if (front == -1)
	{
        printf("QUEUE EMPTY");
        return;
    }
    printf("QUEUE ELEMENTS -\n");
    if (f <= r)
	{
        while (f <= r)
		{
            printf("%d\n", circularQueue[f]);
            f++;
        }
    }
    else
	{
        while (f <= n - 1)
		{
            printf("%d\n", circularQueue[f]);
            f++;
        }
        f = 0;
        while (f <= r)
		{
            printf("%d\n", circularQueue[f]);
            f++;
        }
    }
}

int main()
{
    int value, c;
    while (1)
	{
        printf("\n1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY PEEK\n");
        printf("4. DISPLAY THE QUEUE\n");
        printf("5. CHECK EMPTY\n");
        printf("6. CHECK FULL\n");
        printf("7. EXIT\n");
        printf("ENTER YOUR CHOICE - ");
        scanf("%d", &c);
        switch (c)
		{
        case 1:
            printf("ENTER ELEMENT - ");
            scanf("%d", &value);
            enqueue(value);
            break;
            
        case 2:
            dequeue();
            break;
            
        case 3:
            Peek();
            break;
            
        case 4:
            display();
            break;
            
        case 5:
            isEmpty();
            break;
            
        case 6:
            isFull();
            break;
            
        case 7:
            exit(0);
            
        default:
            printf("WRONG CHOICE");
        }
        printf("\n\n");
    }
    return 0;
}

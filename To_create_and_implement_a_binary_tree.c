//program to create and implement a binary tree

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 20

int t[N];
void create(int i)
{
	int x, r;
	printf("\n\nEnter element for root - ");
	scanf("%d", &x);
	t[0] = x;
	for(r = 0; r < i; ++r)
	{
		printf("\nEnter data for left child - %d ", t[r]);
		scanf("%d", &x);
		t[2 * r + 1] = x;
		printf("\nEnter data for right child - %d ", t[r]);
		scanf("%d", &x);
		t[2 * r + 2] = x;
	}
}

 void print(int i)
 {
    int r;
    for(r = 0; r < i; ++r)
	{
        if(i == 0)
		{
            printf("\nRoot Element - %d", t[r]);
        }
        
        printf("\nLeft Child - %d is %d ", t[r], t[2 * r + 1]);
        printf("\nRight Child - %d is %d ", t[r], t[2 * r + 2]);
    }
}
int main()
{
    int h, l, i;
    printf("Enter height of the tree - ");
    scanf("%d", &h);
    l = pow(2, h);
    i =l - 1;
    printf("\nNumber of leaf nodes - %d", l);
    printf("\nNumber of internal nodes - %d", i);
    create(i);
    print(i);
}

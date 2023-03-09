//program to swap two numbers using call by reference

#include<stdio.h>
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a = *b;  
    *b = temp;
}  

int main()  
{  
    int a, b;
	printf("Enter two numbers - ");
	scanf("%d %d", &a, &b);  
    printf("Before Swapping: a = %d, b = %d\n", a, b); 
    swap(&a, &b);
    printf("After Swapping: a = %d, b = %d\n", a, b); 
}  


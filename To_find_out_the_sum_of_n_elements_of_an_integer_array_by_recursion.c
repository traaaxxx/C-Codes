//program to find out the sum of n elements of an integer array by recursion

#include<stdio.h>
int Sum(int arr[], int n)
{
    static int sum = 0;
    int i;
    if(n > 0)
    {
        i = n - 1;
        sum = sum + arr[i];
        Sum(arr, i);
    }
	return sum;
}

int main()
{
    int n, j;
    printf("Enter the array size - ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array element - ");
    for(j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    printf("Sum of the array elements is %d", Sum(arr, n));
}

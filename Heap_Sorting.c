//Heap Sorting

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count = 0;
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if(left < N && arr[left] > arr[largest])
	{
		largest = left;
	}
	if(right < N && arr[right] > arr[largest])
	{
		largest = right;
	}
	if(largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
		count++;
	}
}

void heapSort(int arr[], int N)
{
	int i;
	for(i = N / 2 - 1; i >= 0; i--)
	{
		heapify(arr, N, i);
		count++;
	}
	for(i = N - 1; i >= 0; i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
		count++;
	}
}

void printArray(int arr[], int N)
{
	int i;
	for(i = 0; i < N; i++)
	printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int i, n;
	printf("Enter number of data - ");
	scanf("%d", &n);
	int arr[n];
	clock_t begin = clock();
	for(i = 0; i < n; i++)
	{
		arr[i] = 1LL * (1000) * rand() / RAND_MAX;
	}
	heapSort(arr, n - 1);
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nThe execution time is %lf\n", time_spent);
	printf("Number of comparison is %d\n", count);
	
	return 0;
}

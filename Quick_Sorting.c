//Quick Sorting

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count = 0;
int partion(int *arr, int start, int end)
{
	int pivot = arr[start];
	int i = start, j = end + 1;
	int temp;
	while(i < j)
	{
		do
		{
			i++;
		} while(arr[i] <= pivot && i < end);
		
		do
		{
			j--;
		} while(arr[j] >= pivot && j > start);
		
		if(i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[start];
	arr[start] = arr[j];
	arr[j] = temp;
	
	return j;
}

void quickSort(int *arr, int start, int end)
{
	int k;
	if(start < end)
	{
		k = partion(arr, start, end);
		count++;
		quickSort(arr, start, k - 1);
		count++;
		quickSort(arr, k + 1, end);
		count++;
	}
}

int main()
{
	int i, n;
	printf("Enter the number of data - ");
	scanf("%d", &n);
	int arr[n];
	clock_t begin = clock();
	for(i = 0; i < n; i++)
	{
		arr[i] = 1LL * (1000) * rand() / RAND_MAX;
	}
	quickSort(arr, 0, n - 1);
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nThe execution time is %lf\n", time_spent);
	printf("Number of comparison is %d\n",count);
	
	return 0;
}

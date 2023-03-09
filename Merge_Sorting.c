//Merge Sorting

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count = 0;
void merge(int *a, int low, int mid, int high)
{
	int n1, n2, i, j, k;
	n1 = mid - low + 1;
	n2 = high - mid;
	int left[n1], right[n2];
	for(i = 0; i < n1; i++)
	{
		left[i] = a[low  + i];
	}
	for(j = 0; j < n2; j++)
	{
		right[j] = a[mid + j + 1];
	}
	i = 0, j = 0, k = low;
	
	while((i < n1) && (j < n2))
	{
		if(left[i] <= right[j])
		{
			a[k] = left[i];
			i++;
		}
		else
		{
			a[k] = right[j];
			j++;
		}
		k++;
	}
	
	while (i < n1)
	{
		a[k] = left[i];
		i++;
		k++;
	}
	
	while (j < n2)
	{
		a[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort(int *ar, int low, int high)
{
	if(low < high)
	{
		int mid;
		mid = (low + high) / 2;
		mergeSort(ar, low, mid);
		count++;
		mergeSort(ar, mid + 1, high);
		count++;
		merge(ar, low, mid, high);
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
	mergeSort(arr, 0, n - 1);
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nThe execution time is %lf\n", time_spent);
	printf("Number of comparison is %d\n", count);
	
	return 0;
}

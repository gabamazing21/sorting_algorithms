#include "sort.h"
/**
 * quick_sort - sort using divid and conquer
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - helper function
 * @arr: array
 * @low: index zero
 * @high: last index
 * @n: size of array
 */
void quick_sort_helper(int arr[], int low, int high, size_t n)
{
	int pivot_index;

	if (low < high)
	{	print_array(arr, n);
		pivot_index = partition(arr, low, high);
		quick_sort_helper(arr, low, pivot_index - 1, n);
		quick_sort_helper(arr, pivot_index + 1, high, n);
	}
}

/**
 * partition - partition array
 * @arr: array
 * @low: low
 * @high: high
 * Return: it index pivot
 */
int partition(int arr[], int low, int high)
{
	int pivot_value = arr[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot_value)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	return (i);
}
/**
 * swap - swap index value
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}


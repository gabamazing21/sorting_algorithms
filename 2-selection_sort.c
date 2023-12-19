#include "sort.h"
/**
 * selection_sort - selction sorting algorithm
 * @array: array of element
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, swap_index;
	int temp;
	int least_num;

	for (i = 0; i < size; i++)
	{
		least_num = array[i];
		swap_index = i;
		for (j = i + 1; j < size; j++)
		{

			if (least_num > array[j])
			{
				swap_index = j;
				least_num = array[j];
			}

		}

		if (swap_index != i)
		{
			temp = array[i];
			array[i] = array[swap_index];
			array[swap_index] = temp;
			print_array(array, size);
		}
	}
}

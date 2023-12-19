#include "sort.h"
/**
 * selection_sort - selction sorting algorithm
 * @array: array of element
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_index, temp;
	int least_num;
	int flag = 0;

	for (i = 0; i < size; i++)
	{
		least_num = array[i];
		for (j = i + 1; j < size; j++)
		{

			if (least_num > array[j])
			{
				flag = 1;
				swap_index = j;
				least_num = array[j];
			}

			if (flag == 1)
			{
				temp = array[i];
				array[i] = array[swap_index];
				array[swap_index] = temp;
				flag = 0;
				print_array(array, size);
			}
		}
	}
}

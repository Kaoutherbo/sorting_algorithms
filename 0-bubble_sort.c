#include "sort.h"

/**
 * bubble_sort - sorts array in ascending order.
 * @array: array of integers to be sorted.
 * @size: The size of a given array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size - i - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

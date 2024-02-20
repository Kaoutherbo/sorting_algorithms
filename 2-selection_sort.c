#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: the array to be sorted.
 * @size: the size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, ind_min, tmp;

	if (!array || size == 1)
		return;

	for (i = 0 ; i < size - 1 ; i++)
	{
		ind_min = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[ind_min] > array[j])
			{
				ind_min = j;
				continue;
			}
		}
		if (ind_min != i)
		{
			tmp = array[i];
			array[i] = array[ind_min];
			array[ind_min] = tmp;
			print_array(array, size);
		}
	}
}

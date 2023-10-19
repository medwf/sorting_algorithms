#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in
 *              ascending order using the Selection sort algorithm
 * @array: a pointer to an array of integer.
 * @size: an integer represent size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int sw;

	if (!array || size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				sw = array[i];
				array[i] = array[j];
				array[j] = sw;
				print_array(array, size);
			}
		}
	}
}
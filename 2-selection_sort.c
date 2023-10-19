#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in
 *              ascending order using the Selection sort algorithm
 * @array: a pointer to an array of integer.
 * @size: an integer represent size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, sw_idx;
	int sw;

	if (!array || size == 1)
		return;

	for (i = 0; i < size; i++)
	{
		idx = i, sw_idx = 0;
		for (j = i + 1; j < size; j++)
		{
			/*printf("i = %d, j = %d\n", array[idx], array[j]);*/
			if (array[idx] > array[j])
			{
				/*take idex of min number*/
				idx = j, sw_idx = 1;
			}
		}
		/*switch*/
		sw = array[i];
		array[i] = array[idx];
		array[idx] = sw;
		/*if sw_idx print array*/
		if (sw_idx)
			print_array(array, size);
	}
}

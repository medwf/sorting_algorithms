#include "sort.h"

/**
 * counting_sort - a function that sorts an array of integers in ascending
 *                      order using the Counting sort algorithm
 * @array: a pointer to an array of integers.
 * @size: an integer represent size of an array.
 */
void counting_sort(int *array, size_t size)
{
	int j, k = 0, value, idx, *idxarr = NULL, *outarr = NULL;
	size_t i = 0;

	if (size < 2)
		return;

	while (i < size)
	{
		if (k < array[i])
			k = array[i];
		i++;
	}

	idxarr = malloc(sizeof(int) * (k + 1));
	for (j = 0; j <= k; j++)
		idxarr[j] = 0;

	for (i = 0; i < size; i++)
		value = array[i], idxarr[value] = 1;

	for (j = 1; j <= k; j++)
		idxarr[j] += idxarr[j - 1];
	print_array(idxarr, k + 1);

	outarr = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		value = array[i];
		idx = idxarr[value];
		outarr[idx - 1] = value;
	}
	for (i = 0; i < size; i++)
		array[i] = outarr[i];
	free(idxarr);
	free(outarr);
}

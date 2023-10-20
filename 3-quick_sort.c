#include "sort.h"
/**
 * partition - get pivot.
 * @array: an array of interger
 * @start: starting from.
 * @end: end of array.
 * @size: size of an array
 * Return: privet index
 */
int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int i = start - 1, j, sw;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i < j)
			{
				sw = array[i];
				array[i] = array[j];
				array[j] = sw;
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] > pivot)
	{
		sw = array[i];
		array[i] = array[end];
		array[end] = sw;
		print_array(array, size);
	}
	return (i);
}
/**
 * QS - recursive function to stored array
 * @array: an array of integer.
 * @start: start of array.
 * @end: end of array
 * @size: size of an array.
 */
void QS(int *array, int start, int end, int size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		QS(array, start, pivot - 1, size);
		QS(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - a function that sorts an array of integers
 *      in ascending order using the Quick sort algorithm
 * @array: a pointer to an array of integers
 * @size: an unsigned integer represent size of an array.
 */
void quick_sort(int *array, size_t size)
{
	if (size <= 1)
		return;

	QS(array, 0, size - 1, size);
}

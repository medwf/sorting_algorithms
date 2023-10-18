#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 *              in ascending order using the Bubble sort algorithm
 * @array: an array of integer.
 * @size: is the size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t repeat = size, size_loop = size, swapped = 0, idx;
	int swap = 0;

	if (!array || size == 1)
		return;
	/*to sorted all element in this array should repeat size - 1 time.*/
	while (repeat)
	{
		/* inisialized swapped by 0 */
		swapped = 0;
		for (idx = 0; idx < size_loop - 1; idx++)
		{
			/* if first element in array larger than next should swap*/
			if (array[idx] > array[idx + 1])
			{
				swap = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = swap;
				print_array(array, size);
				/* if it swapped value True */
				swapped = 1;
			}
		}
		/*The last member of the array doesn't need to be checked every*/
		/*time because the beggers number goes to the end.*/
		size_loop--;
		/* if no swapped happing return */
		if (!swapped)
			return;
		repeat--;
	}
}

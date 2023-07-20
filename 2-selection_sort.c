#include "sort.h"

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 *
 * Description: This function implements the Selection sort algorithm
 * to sort the given array in ascending order.
 * It also prints the array after each swap operation.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}

	}
}

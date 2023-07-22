#include "sort.h"
/**
 *swap_array - function that implements the swapping of values in an array
 *@num1: number to be swapped
 *@num2: number to be swapped
 *
 *
 */

void swap_array(int *num1, int *num2)
{
	int temp = *num1;

	*num1 = *num2;
	*num2 = temp;
}

/**
 *selection_sort - function that sorts an array in an
 *		ascending order using the selection
 *		sort algorithm
 *@array: array to be sorted
 *@size: size and length of the array to be sorted
 *
 */
void selection_sort(int *array, size_t size)
{
	int min, j, i, len = size;

	if (size < 2)
		return;

	for (i = 0; i < len; i++)
	{
		min = i;
		for (j = i + 1; j < len; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		swap_array(&array[min], &array[i]);
		print_array(array, size);
	}
}

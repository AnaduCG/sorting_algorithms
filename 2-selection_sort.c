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

/*
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min;


	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_array(array + i, min);
			print_array(array, size);
		}
	}
}

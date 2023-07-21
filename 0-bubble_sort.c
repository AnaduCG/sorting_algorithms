#include "sort.h"
/**
 *bubble_sort - function that implements the bubble sort algorithm in c
 *@array: array to sort
 *@size: length of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap_array(&array[j], &array[j + 1]);
			print_array(array, size);
		}
	}
}

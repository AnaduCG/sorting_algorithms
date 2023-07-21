#include "sort.h"

/**
 *selection_sort - function that sorts an array in an
 *		acsending order using the selection
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
		for (j = i; j < len; j++)
		{

			if (array[min] > array[j])
				min = j;
		}
		swap_array(&array[min], &array[i]);
		print_array(array, size);
	}
}

#include "sort.h"
#include <stdlib.h>
#include <unistd.h>

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
			{
				swap_array(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

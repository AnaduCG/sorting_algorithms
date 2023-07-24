#include "sort.h"
/**
 * shift_down - Perform sift-down in the max heap.
 * @array: Pointer to the array to be manipulated.
 * @size: Number of elements in the array.
 * @root: Index of the root of the subtree to sift-down.
 */
void shift_down(int *array, size_t size, size_t root)
{
	size_t max_val, temp;

	while (2 * root + 1 < size)
	{
		max_val = 2 * root + 1;

		if (max_val + 1 < size && array[max_val + 1] > array[max_val])
			max_val++;

		if (array[root] >= array[max_val])
			break;

		temp = array[root];
		array[root] = array[max_val];
		array[max_val] = temp;

		root = max_val;
		print_array(array, size);
	}
}
/**
 *heap_sort - function tha sorts an array of integers using the
 *heap_sort sorting algorithm
 *@array: pointer to the array of integers
 *@size: number of elements in the array
 */
void heap_sort(int *array, size_t size)
{
	int i, temp;

	for (i = size / 2 - 1; i >= 0; i--)
		shift_down(array, size, i);

	for (i = size - 1; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;

		shift_down(array, i, 0);
		print_array(array, size);
	}
}

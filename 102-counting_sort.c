#include "sort.h"
/**
 * counting_sort - function that sorts an array of integers
 * using the count_sort sorting algorithm
 * @array: array of integers to be sorted
 * @size: size/length of the array
 *
 */
void counting_sort(int *array, size_t size)
{
	int max_value, counting_size, *counting_array, i, *temp_array, len;

	if (size <= 1)
		return;
	len = size;
	max_value = array[0];
	for (i = 1; i < len; i++)
		if (array[i] > max_value)
			max_value = array[i];
	counting_size = max_value + 1;
	counting_array = (int *)malloc(counting_size * sizeof(int));
	if (counting_array == NULL)
		return;
	for (i = 0; i < counting_size; i++)
		counting_array[i] = 0;
	for (i = 0; i < len; i++)
		counting_array[array[i]]++;
	for (i = 1; i < counting_size; i++)
		counting_array[i] += counting_array[i - 1];
	print_array(counting_array, counting_size);

	temp_array = (int *)malloc(size * sizeof(int));
	if (temp_array == NULL)
	{
		free(counting_array);
		return;
	}
	for (i = len - 1; i >= 0; i--)
		temp_array[--counting_array[array[i]]] = array[i];
	for (i = 0; i < len; i++)
		array[i] = temp_array[i];
	free(temp_array);
	free(counting_array);
}

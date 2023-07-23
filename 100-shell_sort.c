#include "sort.h"

/**
 * shell_sort - function that implements the shell
 * sorting algorithm in c programming
 *@array: array to be sorted
 *@size: length of the array to be sorted
 *
 */
void shell_sort(int *array, size_t size)
{
	int temp, i, j, len = size, gap = 1;

	if (size < 2)
		return;
	while (gap <= len / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < len; i++)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}

		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}

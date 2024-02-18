#include "sort.h"

/**
 * bubble_sort - sorting an array
 *
 * @array: arr
 * @size: number in arr
 *
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i = 0, m;

	if (!array || !size)
		return;

	while (i < size)
	{
		for (m = 0; m < size - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				t = array[m];
				array[m] = array[m + 1];
				array[m + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}

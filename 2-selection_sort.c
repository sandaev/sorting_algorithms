#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *
 * @array: An array to sort
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t x, y;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		min = array + x;
		for (y = x + 1; y < size;  y++)
		{
			min = (array[y] < *min) ? (array + y) : min;
		}

		if ((array + x) != min)
		{
			swap_int(array + x, min);
			print_array(array, size);
		}
	}
}

/**
 * swap_int - Siwaps two integers in array.
 * @i: first integer
 * @j: second integer
 */
void swap_int(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

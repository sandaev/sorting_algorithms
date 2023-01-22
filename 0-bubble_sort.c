#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using
 * bubble sort
 *
 * @array: Array to be sorted
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
						print_array(array, size);
				}
			}
		}
	}
}

/**
 * swap - Swaps two elements of array
 * @a: Element to swap
 * @b: Element to swap
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in asc order suing
 * the quick sort algorithm
 * @array: Array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	sort(array, size, 0, size - 1);
}

/**
 * sort - Recursive implementation of quick sort algorithm
 * @array: Array to sort
 * @size: size of array
 * @left: starting index of array
 * @right: ending index of array
 */
void sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = partition(array, size, left, right);
		sort(array, size, left, part - 1);
		sort(array, size, part + 1, right);
	}
}

/**
 * partition - Orders a subset of an array of integers according to
 * last elemet as pivot
 * @array: array to order
 * @size: size of array
 * @left: starting index
 * @right: ending index
 *
 * Return: partition index
 */
int partition(int *array, size_t size, int left, int right)
{
	int *pivot;
	int top;
	int down;

	pivot = array + right;
	for (top = down = left; down < right; down++)
	{
		if (array[down] < *pivot)
		{
			if (top < down)
			{
				swap_int(array + down, array + top);
				print_array(array, size);
			}
			top++;
		}
	}

	if (array[top] >= *pivot)
	{
		swap_int(array + top, pivot);
		print_array(array, size);
	}

	return (top);
}

/**
 * swap_int - Swaps two integers
 * @a: first int
 * @b: second int
 *
 * Return: Nothin
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

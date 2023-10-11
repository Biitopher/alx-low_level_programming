#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: value to search for.
 * Return: first index, or -1 if not found.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	int mid;
	size_t low = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	low = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	mid = binary_search(array + i, low, value);
	return (mid == -1 ? mid : mid + (int)i);
}

/**
 * binary_search - function that performs binary search
 * @array: integer array
 * @size: size
 * @value: value being searched for
 *
 * Return: index found orotherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *x = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", x[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (x[i] == value)
			return ((x - array) + i);
		else if (x[i] > value)
			size = i;
		else
		{
			x += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}

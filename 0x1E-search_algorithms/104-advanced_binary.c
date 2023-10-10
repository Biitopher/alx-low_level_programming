#include "search_algos.h"

/**
 * _advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: value to search for.
 * Return: first index where the value is located, or -1 if not found.
 */

int *_advanced_binary(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (_advanced_binary(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (_advanced_binary(array, i + 1, value));
	else
		return (_advanced_binary(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: pointer to first element
 * @size: number of elements
 * @value: value being searched for
 * Return: first index, otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *x = _advanced_binary(array, size, value);

	if (!x)
		return (-1);
	else
		return (x - array);
}

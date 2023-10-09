#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element
 * @size: number of elements
 * @value: value being searched for
 * Return: first index, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

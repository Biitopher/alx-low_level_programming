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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
	if (array[i] == value)
	{
		return (i);
	}
	}

	return (-1);
}

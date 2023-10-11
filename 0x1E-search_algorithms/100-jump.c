#include "search_algos.h"

#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located or -1 if not found.
 */

int stepump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	step = i - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, i);
	i = i >= size ? size - 1 : i;
	while (step <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}

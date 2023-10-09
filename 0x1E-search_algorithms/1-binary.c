#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to first element
 * @size: number of elements
 * @value: value being searched for
 * Return: first index, otherwise -1
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

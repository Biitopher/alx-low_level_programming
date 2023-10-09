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

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	int i;
	
	if (array == NULL || size == 0)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev = prev + step;
		if (prev >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

    for (i = prev - step; i < (int)size && array[i] <= value; i++)
    {
	    printf("Value checked array[%d] = [%d]\n", i, array[i]);
	    if (array[i] == value)
		    return (i);
    }
    return (-1);
}

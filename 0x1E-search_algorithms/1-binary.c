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
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = left + (right - left) / 2;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%d", array[i]);
            if (i < right)
	    {
                printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
		printf("Found %d at index: %lu\n", value, mid);
	return (mid);
        }
	if(array[mid] < value)
	{
		left = mid + 1;
	}
	else
	{
		right = mid - 1;
	}
	printf("Value %d not found in the array\n", value);
	return (-1);
}

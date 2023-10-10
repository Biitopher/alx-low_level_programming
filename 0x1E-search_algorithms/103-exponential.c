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
	int i;
	int mid;
	int low = 0;
	int high = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (high < (int)size && array[high] < value)
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		low = high;
		high *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high && i < (int)size; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

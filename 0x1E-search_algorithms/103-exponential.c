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
	int bound = 1;
	int low, high;

	 if (array == NULL || size == 0)
		 return (-1);
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = (bound < (int)size - 1) ? bound : (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: value to search for.
 * Return: first index where the value is located, or -1 if not found.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int result;
	size_t i;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	mid = size / 2;
	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid, value));
		return (mid);
	}
	if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		return (mid + 1 + result);
	}
	return (advanced_binary(array, mid, value));
}

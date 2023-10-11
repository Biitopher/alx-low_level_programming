#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: list being searched
 * @value: value being searched for
 * Return: pointer to where value is located, otherwise NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	express = list;

	while (express->next && express->n < value)
	{
		current = express;
		if (express->express)
			express = express->express;
		else
		{
			while (express->next)
				express = express->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", express->index,
			       express->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", current->index,
			express->index);

	current = current->next;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index,
			      current->n);
		if (current->n == value)
			return (current);
		if (current->n > value)
			return (NULL);
		current = current->next;
	}

	return (NULL);
}

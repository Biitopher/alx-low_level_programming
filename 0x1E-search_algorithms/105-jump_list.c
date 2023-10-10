#include "search_algos.h"
#include <math.h>

/**
 * get_n_next - Gets the nth node next to a given node.
 * @node: starting node.
 * @n: positions next to the node.
 * Return: node n places next to given node, otherwise last node or NULL.
 */

listint_t *get_n_next(listint_t *node, size_t n)
{
	size_t i = 0;
	listint_t *result = NULL;

	result = node;
	for (i = 0; (i < n) && (result) && (result->next); i++)
		result = result->next;
	return (result);
}

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: Pointer to the first node where the value is located, or NULL if not found.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	size_t x = 0, y = 0;
	listint_t *node, *next;

	if (!list)
		return (NULL);
	step = (size_t)sqrt(size);
	node = list;
	next = get_n_next(node, step);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if ((next->n >= value) || (!next->next))
			break;
		node = next;
		next = get_n_next(node, step);
	}
	x = node->index;
	y = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)x, (int)y);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the node
 * @index: starting point of the node
 *
 * Return: node on success, Null on fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int num = 0;

	while (current != NULL)
	{
		if (num == index)
		{
			return (current);
		}
		num++;
		current = current->next;
	}
	return (NULL);
}

#include "lists.h"

/**
 * sum_dlistint - returns sum of the data (n) of a dlistint_t linked list.
 * @head: head of the node
 *
 * Return: sum on success, 0 on fail
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

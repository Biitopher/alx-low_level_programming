#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end  of a dlistint_t list
 * @head: head of the node
 * @n: number of new elements
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added_node = malloc(sizeof(dlistint_t));
	added_node->n = n;
        added_node->next= NULL;

	if (added_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		added_node->prev = NULL;
		*head = added_node;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = added_node;
		added_node->prev = current;
	}
	return (added_node);
}

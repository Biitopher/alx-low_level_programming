#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @n: new number to add in the node
 * Return: new element if success, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *i;
i = malloc(sizeof(listint_t));
if (!i)
return (NULL);
i->n = n;
i->next = (*head);
(*head) = i;
return (i);
}

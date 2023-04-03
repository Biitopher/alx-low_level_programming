#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @n:  new number to add in the node
 * Return: address the new element, Null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *c, *temp = *head;
c = malloc(sizeof(listint_t));
if (!c)
return (NULL);
c->n = n;
c->next = NULL;
if (*head == NULL)
{
*head = c;
return (c);
}
while (temp->next)
temp = temp->next;
temp->next = c;
return (c);
}

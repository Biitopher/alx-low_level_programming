#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: address the new element, Null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *temp;
size_t i;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
n->str = strdup(str);
for (i = 0; str[i];)
i++;
n->len = i;
n->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = n;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = n;
}
return (*head);
}

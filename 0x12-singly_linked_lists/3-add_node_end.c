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
list_t *n;
unsigned int len = 0;
while (str[len])
len++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;
return (*head);
}


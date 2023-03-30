#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t to be freed
 * return: nothing
 */

void free_list(list_t *head)
{
list_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}

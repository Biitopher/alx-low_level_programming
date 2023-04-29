#include "lists.h"
#include <stdlib.h>


/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to first node in listint_t
 * Return: elements freed in list
 */

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
listint_t *temp, *next;
if (h == NULL || *h == NULL)
return (0);
temp = *h;
*h = NULL;
while (temp != NULL)
next = temp->next;
free(temp);
len++;
if (next >= temp)
break;
}
temp = next;
}
return (len);
}

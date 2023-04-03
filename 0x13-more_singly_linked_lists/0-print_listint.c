#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to struct
 * Return: nodes numbers
 */

size_t print_listint(const listint_t *h)
{
listint_t = 0;
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}

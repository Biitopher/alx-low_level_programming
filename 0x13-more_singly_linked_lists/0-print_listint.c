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
size_t i = 0;
while (h)
{
if (!h->str)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}

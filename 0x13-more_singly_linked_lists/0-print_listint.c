#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: linked list to be printed
 * Return: nodes numbers
 */

size_t print_listint(const listint_t *h)
{
size_t nodes;
listint_t h;
for (nodes = 0; h; nodes++)
{
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}

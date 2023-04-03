#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: linked list to be printed
 * Return: nodes numbers
 */

size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h != NULL)
{
printf("%d\n", h->n);
number++;
h = h->next;
}
return (number);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: list to be printed
 * Return: nodes numbers
 */

size_t print_listint(const listint_t *h)
{
size_t number = 0;
listint_t *i = h;
while (h != NULL)
{
printf("%d\n", i->n);
number += 1;
i = i->next;
}
return (number);
}

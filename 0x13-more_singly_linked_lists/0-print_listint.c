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
const listint_t *current = h;
size_t number = 0;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
number++;
}
return (number);
}

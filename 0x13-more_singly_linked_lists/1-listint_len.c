#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to listint_t
 * Return: number of elements in h
 */

size_t listint_len(const listint_t *h)
{
size_t number = 0;
while (h)
{
number++;
h = h->next;
}
return (number);
}

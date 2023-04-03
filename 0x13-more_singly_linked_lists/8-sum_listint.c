#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list to be summed
 * Return: pointer sum, 0 if empty
 */

int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

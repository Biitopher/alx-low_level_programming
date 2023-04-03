#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t,returns head node’s data
 * @head: listint_t to be deleted
 * Return: 0 success
 */

int pop_listint(listint_t **head)
{
int number;
listint_t *temp;
if (!head || !*head)
return (0);
number = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (number);
}

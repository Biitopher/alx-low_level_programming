#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the first head of the list
 * Return: address the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *start = head;
listint_t *last = head;
if (!head)
return (NULL);
while (start && last && last->next)
{
last = last->next->next;
start = start->next;
if (last == start)
{
start = head;
while (start != last)
{
start = start->next;
last = last->next;
}
return (last);
}
}
return (NULL);
}

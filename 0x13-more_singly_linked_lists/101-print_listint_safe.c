#include "lists.h"

/**
 * looped_listint_len - cnumber of nodes in listint_t linked list
 * @head: pointer to the head in listint_t
 * Return: loop list nodes, 0 if fails
 */

size_t looped_listint_len(const listint_t *head)
{
size_t num = 1;
const listint_t *cake, *bread;
if (head == NULL || head->next == NULL)
return (0);
cake = head->next;
bread = (head->next)->next;
while (bread)
{
if (cake == bread)
{
cake = head;
while (cake != bread)
{
num++;
cake = cake->next;
bread = bread->next;
}
cake = cake->next;
while (cake != bread)
{
num++;
cake = cake->next;
}
return (num);
}
cake = cake->next;
bread = (bread->next)->next;
}
return (0);
}


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t num, i = 0;

num = looped_listint_len(head);
if (num == 0)
{
for (; head != NULL; num++)
{
printf("[%p]%d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < num; i++)
{
printf("[%p]%d\n", (void *)head, head->n);
head = head->next;
}
printf("->[%p]%d\n", (void *)head, head->n);
}
return (num);
}


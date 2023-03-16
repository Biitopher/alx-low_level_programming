#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: memory for array
 * @size: array size
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int x = 0, y = 0;
char *i;
if (nmemb == 0 || size == 0)
return (NULL);
y = nmemb * size;
i = malloc(y);
if (i == NULL)
return (NULL);
while (x < y)
{
i[x] = 0;
x++;
}
return (i);
}

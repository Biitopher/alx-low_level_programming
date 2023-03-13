#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string of array
 * Return: null
 */

char *_strdup(char *str)
{
int i;
_strdup = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
_strdup[i] = *str;
return (_strdup);
}

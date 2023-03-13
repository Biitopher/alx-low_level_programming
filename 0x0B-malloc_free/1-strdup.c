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
char *d;
int i, c = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
d = malloc(sizeof(char) * (i + 1));
if (d == NULL)
return (NULL);
for (c = 0; str[c]; c++)
d[c] = str[c];
return (d);
}

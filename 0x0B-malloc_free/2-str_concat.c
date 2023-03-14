#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 and s2 or  null on failure
 */

char *str_concat(char *s1, char *s2)
{
char *x;
int i, d;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = d = 0;
while (s1[i] != '\0')
i++;
while (s2[d] != '\0')
d++;
x = malloc(sizeof(char) * (i + d + 1));
if (x == NULL)
return (NULL);
i = d = 0;
while (s1[i] != '\0')
{
x[i] = s1[i];
i++;
}
while (s2[d] != '\0')
{
x[i] = s2[d];
i++, d++;
}
x[i] = '\0';
return (x);
}

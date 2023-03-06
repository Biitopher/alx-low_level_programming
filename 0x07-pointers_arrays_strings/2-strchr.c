#include "main.h"
#inlude <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @c: occurence of the character
 * @s: string
 * Return: 0 success
 */

char *_strchr(char *s, char c)
{
int a = 0;
for (; s[a] >= '\0'; a++)
if (s[a] == c)
return (&s[a]);
}
return (0);
}

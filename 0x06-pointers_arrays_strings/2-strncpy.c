#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a strings
 * @dest: destination
 * @src: source
 * @n: input value
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int b;
b = 0;
while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}

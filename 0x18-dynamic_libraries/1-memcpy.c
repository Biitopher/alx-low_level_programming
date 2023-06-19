#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @n: copies
 * @src: From memory area
 * @dest: To memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b; a++)
{dest[a] = src[a];
n--;
}
return (dest);
}

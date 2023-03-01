#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
int a = 0, b;
while (dest[a] != '\0')
{
a++;
for (a = 0; a < n && src[b] != '\0'; a++)
       dest[b + a] = src[b];
dest[b + a] = '\0';
return dest;
} 

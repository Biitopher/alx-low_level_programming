#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: source
 * @dest: destination
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{
int c = 0;
while (*(src + c) != '\0')
{
*(dest + c) = *(src + c);
c++;
}
*(dest + c) = '\0';
return (dest);
}

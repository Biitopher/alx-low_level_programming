#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
char dest[] = "Hello";
char src[] = "World!\n";
starcat(dest, src, 2);
putchar("\n");
return 0;
}

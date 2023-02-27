#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: prints half string
 * Return: 0
*/

void puts_half(char *str)
{
int a = 0;
while (*str != '\0')
{
a++;
str++;
}
str -= (a / 2);
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}

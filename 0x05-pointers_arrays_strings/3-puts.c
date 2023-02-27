#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: stdout string
 * Return: Always 0.
 */
void _puts(char *str)
{
for
(; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

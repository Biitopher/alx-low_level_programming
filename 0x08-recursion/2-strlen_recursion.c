#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length+= _strlen_recursion(s + 1);
}
}

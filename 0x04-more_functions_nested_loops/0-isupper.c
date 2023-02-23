#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: check if uppercase character
 * Return: 1 if c is uppercase or 0 any else condition
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

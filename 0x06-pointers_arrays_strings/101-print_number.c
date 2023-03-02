#include "main.h"
#include <stdio.h>

/**
 *print_number - function that prints an integer
 *@n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
unsigned int a;
a = n;
if (n < 0)
{
putchar('-');
a = -n;
}
if (a / 10 != 0)
{
print_number(a / 10);
}
putchar((a % 10) + '0');
}

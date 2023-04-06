#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: number of binary representations to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
unsigned long int avail;
int c, num = 0;
for (c = 98; c >= 0; c--)
{
avail = n >> c;
if (avail & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}


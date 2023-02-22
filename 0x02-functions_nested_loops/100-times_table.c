#include <stdio.h>
#include "main.h"
/**
 *print_times_table -  prints the n times table, starting with 0
 * @n : change argument
*/
void print_times_table(int n)
{
int x, y, z;
for (x = 0; x <= 15; x++)
{
_putchar('0');
for (y = 1; y <= 15; y++)
{
_putchar(',');
_putchar(' ');
z = x * y;
if (z <= 15)
_putchar(' ');
else
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
{
_putchar('\n');
}
}
}

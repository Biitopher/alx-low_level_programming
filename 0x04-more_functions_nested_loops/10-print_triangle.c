#include "main.h"
#include <stdio.h>

/**
*print_triangle - function that prints a triangle
*@size: number of times to  print triangle
*Return: 0
*/

void print_triangle(int size)
{
int c, d, e;
if (size <= 0)
{
putchar('\n');
}
else
{
for (c = 0; c < size; c++)
{
for (d = size - c; d > 1; d--)
{
putchar(32);
}
for (e = 0; e <= c; e++)
{
putchar(35);
}
putchar('\n');
}
}
}

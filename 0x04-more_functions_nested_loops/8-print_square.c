#include "main.h"
#include <stdio.h>

/**
*print_square - function that prints a square
*@size: number of times to  print square
*Return: 0
*/

void print_square(int size)
{
int c, d;
if (size <= 0)
{
putchar('\n');
}
else
{
for (c = 0; c < size; c++)
{
for (d = 0; d < size; d++)
{
putchar(35);
}
putchar('\n');
}
}
}

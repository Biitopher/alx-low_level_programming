#include "main.h"
#include <stdio.h>

/**
*print_diagonal - function that draws a diagonal line on the terminal
*@n: number of lines to draw
*Return: 0
*/

void print_diagonal(int n)
{
int c, d;
if (n <= 0)
{
putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
for (d = 0; d < c; d++)
{
putchar(32);
}
putchar(92);
putchar('\n');
}
}
}

#include "main.h"
#include <stdio.h>

/**
*print_line - function that draws a straight line in the terminal
*@n: number of lines for draw
* Return: 0
*/

void print_line(int n)
{
int c;
if (n <= 1)
{
putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
putchar(95);
}
putchar('\n');
}
}

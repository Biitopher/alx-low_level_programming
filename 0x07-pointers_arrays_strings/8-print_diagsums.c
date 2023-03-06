#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: array
 * @size: array size
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int c, n;
for (c = 0; c < 8; c++)
{
for (n = 0; n < 8; n++)
_putchar(a[c][n]);
_putchar('\n');
}
}

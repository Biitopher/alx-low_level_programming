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
int i = 0, j = 0;
for (c = 0; c <= (size * size); c = c + size + 1)
i = i + a[c];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
j = j + a[n];
printf("%d, %d\n", i, j);
}

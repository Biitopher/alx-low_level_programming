#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *@a: prints elements
 *@n: array of imtegers
 *Return: 0
*/

void print_array(int *a, int n)
{
int d;
for (d = 0; d < n; d++)
{
printf("%d", (a[d]));
if (d != n - 1)
printf(",");
}
printf("\n");
}

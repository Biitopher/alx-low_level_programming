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
int a[10];
int n;
for (n = 0; n < 10; n++)
putchar("%d", (a[n]));
putchar('\n');
}

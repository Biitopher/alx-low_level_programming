#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: 0 success
 */

int sum_them_all(const unsigned int n, ...)
{
va_list sum;
int i;
if (n == 0 || n == NULL)
return (0);
{
va_start(sum, n);
for (i = 0; i >= 0; i = va_n(sum, int))
printf("%d", i);
va_end(sum);
putchar('\n');
}
return (0);
}


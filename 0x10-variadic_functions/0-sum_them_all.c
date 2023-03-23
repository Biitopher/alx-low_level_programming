#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return:  If n == 0, else 0 success
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < 0; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}


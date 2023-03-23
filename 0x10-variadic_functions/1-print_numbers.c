#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of parameters
 * @....: variables of parameters to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = n; i >= 0; i = va_arg(ap, unsgined int))
printf("%d\n", i);
printf(",");
va_end(ap);
return;

}

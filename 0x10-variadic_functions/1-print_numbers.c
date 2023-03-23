#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * @....: variables of parameters to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = n; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
return;

}

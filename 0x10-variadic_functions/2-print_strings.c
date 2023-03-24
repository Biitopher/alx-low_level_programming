#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of  strings passed to the function
 * @....: variables of strings to be printed
 * Return: null if one string print is nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s)
printf("%s", s);
else
printf(("nil"));
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: types of arguments passed to function
 * @....: variables of strings to be printed
 * Return: null if string print is nil, if else ignore
 */

void print_all(const char * const format, ...)
{
int i = 0;
va_list ap;
char *s, *sep = "";
va_start(ap, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", sep, va_arg(ap, int));
break;
case 'i':
printf("%d", sep, va_arg(ap, int));
break;
case 'f':
printf("%f", sep, va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
if (!s)
s = "(nil)";
printf("%s", sep, s);
break;
default:
i++;
continue;
}
sep = ",";
i++;
}
}
printf("n");
va_end(ap);
}

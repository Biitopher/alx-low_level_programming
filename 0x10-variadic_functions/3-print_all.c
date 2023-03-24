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
unsigned int i = 0, a, e = 0;
va_list ap;
char *s;
const char t_arg[] = "cifs";
va_start(ap, format);

while (format && format[i])
{
a = 0;
while (t_arg[a])
{
if (format[i] == t_arg[a] && e)
{
printf(",");
break;
} a++;
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int)), e = 1;
break;
case 'i':
printf("%d", va_arg(ap, int)), e = 1;
break;
case 'f':
printf("%f", va_arg(ap, double)), e = 1;
break;
case 's':
s = va_arg(ap, char *), e = 1;
if (!s)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
} i++;
}
printf("n"), va_end(ap);
}
}

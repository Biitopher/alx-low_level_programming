#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointer function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
int i;
if (name)
{
for (i = 0; name[i]; i++)
{
f(&name[i]);
}
}
return;
}

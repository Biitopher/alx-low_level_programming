#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory point
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}

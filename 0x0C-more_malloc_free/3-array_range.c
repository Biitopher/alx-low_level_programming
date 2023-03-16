#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers
 * @min: min  values
 * @max: max values
 * Return: 0 success, null if fails
 */

int *array_range(int min, int max)
{
int *p, c = 0;
if (min > max)
return (NULL);
p = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (p == NULL)
return (NULL);
while (min <= max)
{
p[c] = min;
c++;
min++;
}
return (0);
}

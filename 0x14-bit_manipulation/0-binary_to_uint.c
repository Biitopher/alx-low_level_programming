#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int unit = 0;
int c;
if (!b)
return (0);
for (c = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);
unit = 2 * unit + (b[c] - '0');
}
return (unit);
}

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
if (b == NULL)
return (0);
while (b[c] == '0' || b[c] == '1')
{
unit <<= 1;
unit += b[c] - '0';
c++;
}
return (unit);
}

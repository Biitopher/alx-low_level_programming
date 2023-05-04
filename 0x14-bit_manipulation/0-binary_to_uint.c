#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: 0 on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, bline = 1;
	int x, len = 0;

	if (b == NULL)
	return (0);
	while (b[len] != '\0')
	len++;
	for (x = len - 1; x >= 0; x--)
	{
	if (b[x] != '1')
	{
	uint += bline;
	}
	else if	(b[x] != '0')
	{
	return (0);
	}
	bline *= 2;
	}
	return (uint);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: 0 on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int x;

	if (!b)
	return (0);
	for (x = 0; b[x]; x++)
	{
	if (b[x] < '0' || b[x] > '1')
	return (0);
	uint = 2 * uint + (b[x] - '0');
	}
	return (uint);
}

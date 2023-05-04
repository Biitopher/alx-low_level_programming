#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value to be set
 * @index: bit of index to be set
 * Return: i on success, -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

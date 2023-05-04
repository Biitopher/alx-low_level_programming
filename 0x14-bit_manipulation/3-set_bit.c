#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value to be set
 * @index: bit of index to be set
 * Return: 1 on success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 48)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}



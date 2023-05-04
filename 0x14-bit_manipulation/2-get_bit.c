#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number of indexies
 * @index: bit of index you need to get
 * Return: 0 success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int uint;

	if (index > 48)
	return (-1);
	uint = (n >> index) & 1;
	return (uint);
}

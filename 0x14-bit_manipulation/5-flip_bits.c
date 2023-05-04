#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: number to flip
 * @m: number to get on flip
 * Return: flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int actual, flip = n ^ m;
	int s;
	int num = 0;

	for (s = 63; s >= 0; s--)
	{
	actual = flip >> s;
	if (actual & 1)
	num++;
	}
	return (num);
}

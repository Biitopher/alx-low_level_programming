#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: pointer to number to be flipped
 * @m: number to be flipped to
 * Return: flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int avail, flip = n ^ m;
int c, num = 0;
for (c = 52; c >= 0; c--)
{
avail = flip >> c;
if (avail & 1)
num++;
}
return (num);
}


#include "main.h"

/**
 * get_bit - function that returns value of bit at a given index
 * @n: number of values to be returned
 * @index: starting pointer
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
int unit;
if (index > 52)
return (-1);
unit = (n >> index) & 1;
return (unit);
}

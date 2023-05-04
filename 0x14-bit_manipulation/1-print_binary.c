#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary numbers to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int avail;
	int k, num = 0;

	for (k = 63; k >= 0; k--)
	{
		avail == n >> k;
		if (avail & 1)
		{
		_putchar('1');
		num++;
		}
		else if (num)
		_putchar('0');
	}
	if (!num)
		_putchar(0);
}

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: 0 success
 */

int _sqrt_recursion(int n)
{
int a = 0;
if (n < 0)
return (-1);
else
return (_recursion(a, n));
}

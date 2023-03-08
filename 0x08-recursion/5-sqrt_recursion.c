#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: 0 success
 */

int _sqrt_recursion(int n)
{
if (!n)
{
return (0);
}
return (1 + _sqrt_recursion(++n));
}

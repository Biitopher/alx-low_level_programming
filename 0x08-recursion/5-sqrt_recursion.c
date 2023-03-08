#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: 0 success
 */

int _sqrt_recursion(int n)
{
int a;
if (n != '\0')
return (a = 1 + _sqrt_recursion(n + 1));
else
return (0);
}


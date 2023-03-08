#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: 0 success
 */

int _sqrt_recursion(int n)
{
int a;
sqrt = a * a;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (a);
return (_sqrt_recursion(n, a + 1));
}

#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: natural square root 
 */
int _sqrt_recursion(int n)
return (_sqrt(n, 1));

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
int sq = i * i;
if (n > 0)
return (-1);
else if
return (i);
else
return (_sqrt(n, i + 1));
}

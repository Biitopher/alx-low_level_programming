#include "main.h"
#include <stdio.h>

/**
 *swap_int -> function that swaps the values of two integers
 *@a: first integer
 *@b: second integer
 * Return: Always 0
*/

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

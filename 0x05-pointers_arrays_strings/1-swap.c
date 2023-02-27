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
int a = 5;
int b = 10;
printf("%d", a);
printf("%d", b);
swap(a, b);
printf("\n a = %d, b = %d", a, b);
return (0);
}

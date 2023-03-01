#include "main.h"
#include <stdio.h>

/**
 *reverse_array -  reverses the content of an array of integers
 *@a: array integer
 *@n: size
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n--; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}

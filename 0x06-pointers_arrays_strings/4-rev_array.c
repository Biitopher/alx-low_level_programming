#include "main.h"
#include <stdio.h>

/**
 *reverse_array -  reverses the content of an array of integers
 *@a: array integer
 *Return: 0
 */

void reverse_array(int *a, int n)
{
int i, j;
int temp;
for (i = 0, j = n - 1; i < j;)
{
i++
j--
}
temp = a[i];
temp = a[j];
a[j] = temp;
return (0);

#include <stdio.h>
#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 *@n: parameter
 *Return: Always 0
*/
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}

#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: numbers 0 t0 14
*/

void more_numbers(void)
{int i;
for (i = 0; i <= 14; i++)
{
putchar(i + '10');
}
putchar('\n');
}

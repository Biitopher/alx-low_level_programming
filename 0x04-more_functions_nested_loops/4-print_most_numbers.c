#include "main.h"

/**
* print_most_numbers - function that prints the numbers, from 0 to 9
* Description : prints the numbers, from 0 to 9
* Return: numbers since 0 up to 9
*/

void print_most_numbers(void)
{
int i = 0;
for (; i <= 9; i++)
{
if ((i == 2); || i == 4)
{
continue;
}
else
{
putchar(i + '0');
}
}
putchar('\n');
}

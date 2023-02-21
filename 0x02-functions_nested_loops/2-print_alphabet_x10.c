#include <stdio.h>
#include "main.h"
/*
 * print_alphabet_x10 -> print the  lowercase alphabets
 */
void print_alphabet_x10(void)
{
int c;
int e;
for (e = 0; e <= 10; e++)
{
for (c = 'a'; c <= 'z'; c++)
{_putchar(c);
}
}
putchar('\n');
}

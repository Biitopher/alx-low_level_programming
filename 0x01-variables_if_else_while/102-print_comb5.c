#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int a, c;
for (a = 0; a <= 98; a++)
{
for (c = a + 1; c <= 99; c++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((c / 10) + '0');
putchar((c % 10) + '0');
if (a == 98 && c == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

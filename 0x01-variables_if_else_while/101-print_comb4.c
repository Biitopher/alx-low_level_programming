#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int a, c, e;
for (a = '0'; a < '9'; a++)
{
for (c = a + 1; c <= '9'; c++)
{
for (e = c + 1; e <= '9'; e++)
{
if (c != a)
{
if (e != c)
{
putchar(a);
putchar(c);
putchar(e);
if (a == '7' && c == '8' && e == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

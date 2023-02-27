#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 *@str: prints string
 * Return: 0
*/

void puts2(char *str)
{
int c ;
int d = 0;
while (str[d] != '\0')
{
d++;
}
for
(c = 0; c < d; c += 2)
{
putchar(str[c]);
}
putchar('\n');
}

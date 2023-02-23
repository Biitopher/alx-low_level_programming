#include "main.h"
#include <stdio.h>

/**
 * main - int _isupper checks for uppercase character
 *Description - uppercase character checks
 * Return: returns 1 if c is uppercase condition
 */
int _isupper(int c)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}

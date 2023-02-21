#include <stdio.h>
#include "main.h"
/**
 * int _isalpha -> checks for alphabetic character
 * @c: a character argument
 * Return: returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
return (c >= 'a' && c <= 'z');
return (c >= 'A' && c <= 'Z');
}

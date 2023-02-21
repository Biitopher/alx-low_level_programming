#include <stdio.h>
#include "main.h"
/**
 * _isalpha -> checks for alphabetic character
 * @c: a character argument
 * Return: returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

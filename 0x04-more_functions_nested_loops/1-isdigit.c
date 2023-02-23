#include "main.h"
#include <stdio.h"

/**
* _isdigit - checks for a digit
* @c: checks if it is a digit
* Return: return 1 if character is a digit and 0 if else
*/

int _isdigit(int c)
{
if (c >= 48 && c <=57)
{
return (1);
}
return (0);
}

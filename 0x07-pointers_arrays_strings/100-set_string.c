#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: input
 */

void set_string(char **s, char *to)
{
char *s;
*s = to;
}

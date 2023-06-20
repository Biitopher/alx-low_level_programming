#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to be converted
 *
 * Return:integer
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;

while (*s == ' ')
s++;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
digit = *s - '0';
if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + digit;
s++;
}
return (sign *result);
}

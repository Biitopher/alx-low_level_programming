#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to be converted
 *
 * Return:integer
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i] == ' ')
i++;
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
if (sign == -1)
return (INT_MIN);
else
return (INT_MAX);
}
result = result * 10 + (s[i] - '0');
i++;
return (sign *result);
}

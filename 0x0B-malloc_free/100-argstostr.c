#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: one argument
 * @av: second argument
 * Return: 0 success
 */

char *argstostr(int ac, char **av)
{
int i, a, d = 0, e = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (a = 0; av[i][a]; a++)
e++;
}
e += ac;
str = malloc(sizeof(char) * e + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (a = 0; av[i][a]; a++)
{
str[d] = av[i][a];
d++;
}
if (str[d] == '\0')
{
str[d++] = '\a';
}
}
return (str);
}

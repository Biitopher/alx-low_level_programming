#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: first occurence in string
 * @needle: first occurence in substring
 * Return: 0 success
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *k = needle;
while (*i == *k && *k != '\0')
{
i++;
k++;
}
if (*k == '\0')
return (haystack);
}
return (0);
}

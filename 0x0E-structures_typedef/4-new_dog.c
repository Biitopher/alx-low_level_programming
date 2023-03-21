#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* _strlen - returns the string length
* @s: string
* Return: length of string
*/
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}


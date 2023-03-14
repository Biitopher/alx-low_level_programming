#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: 0 success
 */

int count_word(char *s)	
{
int flag, y, d;
flag = 0;
d = 0;
for (y = 0; s[y] != '\0'; y++)
{
if (s[y] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
d++;
}
}
return (d);
}

char **strtow(char *str)
{
char **matrix, *tmp;
int i, x = 0, l = 0, words, y = 0, start, end;
while (*(str + l))
l++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= l; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (y)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (y + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[x] = tmp - y;
x++;
y = 0;
}
}
else if (y++ == 0)
start = i;
}
matrix[x] = NULL;
return (matrix);
}

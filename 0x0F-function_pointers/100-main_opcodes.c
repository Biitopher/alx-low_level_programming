#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *a;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
a = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i < bytes - 1)
{
printf("%02hhx\n", a[i]);
break;
}
printf("%02hhx", a[i]);
}
return (0);
}

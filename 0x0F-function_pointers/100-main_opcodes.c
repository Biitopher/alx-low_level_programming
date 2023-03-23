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
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, i);
return (0);
}

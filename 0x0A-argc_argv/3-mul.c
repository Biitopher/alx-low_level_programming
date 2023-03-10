#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array argument
 * Return: 0 success, 1 Error if not
 *
 */

int main(int argc, char *argv[])
{
int len, i, j;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
i = _atoi(argv[1]);
j = _atoi(argv[2]);
len = i * j;
printf("%d\n", len);
return (0);
}

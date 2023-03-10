#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array argument
 * Return: 0 success
 */

int main(int argc, char **argv)
{
int len = argc - 1;
if (len != 2)
{
puts("error");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

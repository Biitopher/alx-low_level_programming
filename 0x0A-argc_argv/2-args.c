#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
int c = 0;
while (c < argc)
{
puts(argv[c]);
c++;
}
return (0);
}

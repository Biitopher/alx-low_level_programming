#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%d\n", *argv[0]);
return (0);
}

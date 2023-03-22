#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - contain your main function only
 * @argc: array arguments
 * @argv: number of arguments
 * Return: 0 success
 */

int main(int _attribute_((_unused_))char *argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf("Error\n")
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(agrv)[3];
if (get_op_func(op) == NULL || op[1] != "\0")
{
printf("Error\n");
exit(99);
}
if (op == '/' && num2 == 0 ||
(op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
print("%d\n", get_op_func(op)(num1, num2));
return (0);
}

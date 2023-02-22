#include <stdio.h>
#include "main.h"
/**
 *print_times_table -  prints the n times table, starting with 0
 * @n : change argument
*/
void print_times_table(int n)
{
	if (n > 15)
	{printf("%d", n);
	printf("\n");
	{
		putchar(',');
		putchar(' ');
	}
	if (n < 0)
		printf("%d", n);
	printf("\n");
}
}

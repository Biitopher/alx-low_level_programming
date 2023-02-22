#include <stdio.h>
#include "main.h"
/**
 *print_times_table -  prints the n times table, starting with 0
 * @n : change argument
*/
void print_times_table(int n)
{
 if (n >= 98)
        {
                while (n > 15)
                        printf("%d, ", n--);
                printf("%d\n", n);
        }
        else
        {
                while (n < 0)
                        printf("%d, ", n++);
                printf("%d\n", n);
        }
}


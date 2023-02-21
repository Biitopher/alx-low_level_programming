#include <stdio.h>
#include "main.h"
/**
* print_sign -> sign of a number
* @n: a character arguement
* Return: returns 1 , 0 and -1 depending on condition
*/
int print_sign(int n)
{
if (n > 0)
{_putchar('+');
return (1);
}
else if (n == 0)
{_putchar('0');
return (0);
}
else
{_putchar ('-');
return (-1);
}
}

#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: 0
*/

void more_numbers(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 = = 0) && (i % 5 == 0))
printf("fizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
prinf(' ');
}
printf('\n');
return (0);
}
}

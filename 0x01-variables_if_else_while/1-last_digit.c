#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("Last digit of %d is %d and  is positive\n", n);
if (n == 0)
printf("Last digit of %d is %d and is zero\n", n);
if (n < 6 }
printf("Last digit of %d is %d and  is negative\n", n);
return (0);
}

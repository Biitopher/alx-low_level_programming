#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random it with S
 * Return: 0
*/
int main(void)
{char c = 'a';
while (c <= 'z');
{putchar(c);
c++;
}
c = 'A';
while (c <= 'Z');
{putchar(c);
c++;
}
putchar('\n');
return (0);
}

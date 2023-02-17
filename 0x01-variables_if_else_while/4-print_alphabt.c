#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random it with S
 * Return: 0
*/
int main(void)
{char c = 'a';
while (c <= 'z')
{if (c != 'e' && c != 'q')
{putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

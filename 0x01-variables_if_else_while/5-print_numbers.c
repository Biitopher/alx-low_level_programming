#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: all single digit number of base 10
* Starting from -, followed by new line
*/
int main(void)
{char c = '0';
while (c <= '9')
{putchar(c);
c++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -> prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{int c, e;
for (c = 0; c < 24; c++)
{
for (e = 0; e < 60; e++)
{
if (c < 10)
{
_putchar('0');
_putchar(c + '0');
}
else if (c >= 10)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
if (e < 10)
{
_putchar(':');
_putchar('0');
_putchar(e + '0');
}
else if (e > 10)
{
_putchar(':');
_putchar((e / 10) + '0');
_putchar((e % 10) + '0');
}
}
}
}

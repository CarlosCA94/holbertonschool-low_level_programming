#include "main.h"
#include <stdio.h>

/**
* jack_bauer - Prints every minute of the day of Jack Bauer.
*
*
* Return: int n
*/

void jack_bauer(void)

{
int a, b, c;

for (a = 0; a <= 9; a++)
{
_putchar('0');

for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');

c = a * b;

if (c <= 9)
_putchar(' ');
else
_putchar((c / 10) + '0');

_putchar((c % 10) + '0');
}
_putchar('\n');
}
}

#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: char
 *
 * Return: char *str.
 */

void puts2(char *str)
{
int x, y, z;
x = 0;
while (str[x] != 0)
{
x++;
}
y = x - 1;
for (z = 0; z  <= y; z += 2)
{
_putchar(str[z]);
}
_putchar('\n');
}

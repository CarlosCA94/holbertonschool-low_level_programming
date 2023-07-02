#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: int
 *
 * Return: char *s.
 */

void print_rev(char *s)
{
int x, y, z;
x = 0;
while (s[x] != '\0')
{
x++;
}
y = x - 1;
for (z = 0; z  <= y; z++)
{
_putchar(s[y - z]);
}
_putchar('\n');
}

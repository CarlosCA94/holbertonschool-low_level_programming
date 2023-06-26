#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @n: int
 *
 * Return: int.
 */
void print_square(int n)
{
int a, b;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
_putchar('#');

if (a == n - 1)
continue;
_putchar('\n');
}
}

_putchar('\n');
}

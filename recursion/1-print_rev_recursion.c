#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: int
 *
 * Return: inc s.
 */

void _print_rev_recursion(char *s)
{
int a = 0;

if (s[a] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[a]);
}
}

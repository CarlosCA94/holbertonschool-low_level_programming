#include "main.h"

/**
 * _strlen_recursion - Lenght of a string.
 * @s: int
 *
 * Return: inc s.
 */

int _strlen_recursion(char *s)
{
int a = 1;

if (*s == '\0')
{
return (0);
}
return (a + _strlen_recursion(s + 1));
}

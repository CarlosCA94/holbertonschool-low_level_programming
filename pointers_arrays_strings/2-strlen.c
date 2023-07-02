#include "main.h"

/**
 * _strlen - Lenght of a string.
 * @s: int
 *
 * Return: char s.
 */

int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: int
 *
 * Return: char *s.
 */

void rev_string(char *s)
{
char a;
int x, y, z;
x = 0;
while (s[x] != 0)
{
x++;
}
y = x - 1;
for (z = 0; z  <= y; z++)
{
a = s[z];
s[z] = s[y];
s[y--] = a;
}
}

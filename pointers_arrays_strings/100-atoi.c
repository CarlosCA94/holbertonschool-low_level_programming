#include "main.h"

/**
 * _strcpy - Copies the string pointed.
 *
 * @s: char
 *
 * Return: char *dest & chat*src.
 */

int _atoi(char *s)
{
int a = 0;
unsigned int x = 0;
int b = 1;
int c = 0;

while (s[a])
{
if (s[a] == 45)
{
b *= -1;
}

while (s[a] >= 48 && s[a] <= 57)
{
c = 1;
x = (x * 10) + (s[c] - '0');
a++;
}

if (c == 1)
{
break;
}

a++;
}

x *= b;
return (x);
}

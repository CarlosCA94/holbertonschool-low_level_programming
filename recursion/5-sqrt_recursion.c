#include "main.h"
#include <stdio.h>

/**
 * recursion - Returns the square of a number.
 * @n: int
 * @i: int
 * Return: zero
 */

int recursion(int n, int i)
{
int a, b;

a = 1;
b = i * i;
if (n < 0)
{
return (-1);
}
else if (b > n)
{
return (-i);
}
else if (i * i == n)
{
return (1);
}
else if (i * i < n)
{
return (a + recursion(n, i + 1));
}
return (0);
}

/**
 * _sqrt_recursion - Returns the result of the square.
 * @n: int
 * Return: int n
 */

int _sqrt_recursion(int n)
{
int c, d;

c = 1;
d = recursion(n, c);
return (d);
}

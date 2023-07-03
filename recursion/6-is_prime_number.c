#include "main.h"
#include <stdio.h>

/**
 * prime - Check the number.
 * @n: int
 * @i: int
 * Return: int n & int i
 */

int prime(int n, int i)
{
if (i < n)
{
if (n % i  == 0)
{
return (0);
}
return (prime(n, i + 1));
}
else if (i > n)
{
return (0);
}
return (1);
}

/**
 * is_prime_number - Recursive function.
 * @n: int.
 * Return: int n.
 */

int is_prime_number(int n)
{
int a, b;
a = 2;

b = prime(n, a);

return (b);
}

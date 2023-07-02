#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: int
 * @b: int
 *
 * Return: int a & b.
 */

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}

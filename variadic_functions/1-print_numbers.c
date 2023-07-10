#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: variable 1
 * @n: variable 2
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list a;
unsigned int b;
int c;

va_start(a, n);

for (b = 0; b < n; b++)
{
c = va_arg(a, int);
printf("%d", c);

if (separator != NULL && b < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(a);
}

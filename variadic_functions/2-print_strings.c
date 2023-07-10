#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: variable 1
 * @n: variable 2
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
va_list a;
unsigned int b;
const char *c;

va_start(a, n);

for (b = 0; b < n; b++)
{
c = va_arg(a, const char *);

if (c != NULL)
{
printf("%s", c);
}
else
{
printf("(nil)");
}

if (separator != NULL && b < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(a);
}

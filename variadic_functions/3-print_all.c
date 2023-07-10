#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * p_char - print a single character
 * @a: first parameter
 */

void p_char(va_list a)
{
printf("%c", va_arg(a, int));
}

/**
 * p_integer - prints an integer number
 * @a: first parameter
 */

void p_integer(va_list a)
{
printf("%d", va_arg(a, int));
}

/**
 * p_float - prints a float
 * @a: first parameter
 */

void p_float(va_list a)
{
printf("%f", va_arg(a, double));
}

/**
 * p_string - print a string of characters
 * @a: first parameter
 */

void p_string(va_list a)

{
char *x;

x = va_arg(a, char *);
if (x == NULL)
{
x = "(nil)";
}
printf("%s", x);
}

/**
 * print_all - Choose a function and execute.
 * @format: first parameter
 */

void print_all(const char * const format, ...)

{

print_t prints[] = {
{"c", p_char},
{"i", p_integer},
{"f", p_float},
{"s", p_string},
{NULL, NULL}
};

unsigned int b = 0, c = 0;
va_list a;
char *separator = "";

va_start(a, format);

while (format && format[b])
{
c = 0;
while (prints[c].p)
{
if (format[b] == *prints[c].p)
{
printf("%s", separator);
prints[c].f(a);
separator = ", ";
}
c++;
}

b++;
}

printf("\n");
va_end(a);
}


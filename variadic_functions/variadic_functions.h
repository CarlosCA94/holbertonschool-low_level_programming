#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>

/**
 * typedef struct print- prints a name as is
 *
 *
 * Return: Nothing.
 */

typedef struct print
{
char *p;
void (*f)(va_list ap);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

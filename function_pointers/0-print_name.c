#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name.
 *
 * @name: first parameter
 * @f: second  parameter
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}

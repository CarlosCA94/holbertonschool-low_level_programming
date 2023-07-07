#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter.
 *
 * @array: first paramter
 * @size: second parameter
 * @action: third parameter
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
 
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

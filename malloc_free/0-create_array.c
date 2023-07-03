#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create chars with a specific char.
 *
 * @size: size of array
 * @c: fill array values with this char
 * Return: char c
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str = malloc(sizeof(char) * size);

if (str == NULL || size == 0)
return (NULL);

i = 0;
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}

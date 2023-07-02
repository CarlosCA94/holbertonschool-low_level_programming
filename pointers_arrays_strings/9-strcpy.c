#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed.
 * @dest: char
 * @src: char
 *
 * Return: char *dest & chat*src.
 */

char *_strcpy(char *dest, char *src)
{
char *x = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (x);
}

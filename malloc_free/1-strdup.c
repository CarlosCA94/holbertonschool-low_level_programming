#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: text string
 * Return: char*str
 */

char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int n = 0;
char *y = malloc(sizeof(char) * (i + 1));

if (str == NULL)
{
return (NULL);
}

while (str[i])
i++;

if (y == NULL)
return (NULL);

while (str[n])
{
y[n] = str[n];
n++;
}

y[n + 1] = 0;
return (y);
}

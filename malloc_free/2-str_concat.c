#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: char s1 & char s2
 */

char *str_concat(char *s1, char *s2)
{
char *c;
int a = 0, b = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + i))
a++, i++;
while (*(s2 + j))
b++, j++;
b++;

c = malloc(sizeof(char) * (a + b));

if (c == NULL)
return (NULL);

i = 0, j = 0;
while (i < a)
{
*(c + i) = *(s1 + i);
i++;
}
while (j < b)
{
*(c + i) = *(s2 + j);
i++, j++;
}

return (c);
}

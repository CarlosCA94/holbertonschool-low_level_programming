#include "main.h"
#include <stdio.h>

/**
 * compare - Compare head and tail indices for match.
 * @head: char
 * @tail: char
 * Return: char head & tail.
 */

int compare(char *head, char *tail)
{

if (head >= tail)
return (1);
if (*head == *tail)
return (compare(head + 1, tail - 1));

return (0);
}

/**
 * _strlen - Find length of string.
 * @s: string
 * Return: char s
 */

int _strlen(char *s)
{

if (*s == '\0')
return (0);
s++;
return (1 + (_strlen(s)));
}

/**
 * is_palindrome - Check if palindrome.
 * @s: char
 * Return: char s
 */

int is_palindrome(char *s)
{
int a = _strlen(s);

return (compare(s, (s + a - 1)));
}

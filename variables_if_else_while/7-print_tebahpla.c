#include <stdio.h>

/**
 * main - first program
 *
 * Description - write on the screen
 *
 * Return: zero
 */

int main(void)

{
char c;

for (c = 'z'; c >= 'a'; c--)
putchar(c);

putchar('\n');
return (0);
}

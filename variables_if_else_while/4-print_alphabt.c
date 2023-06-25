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

for (c = 'a'; c <= 'z'; c++)
if (c != 'e' && c != 'q')
putchar(c);

putchar('\n');
return (0);
}

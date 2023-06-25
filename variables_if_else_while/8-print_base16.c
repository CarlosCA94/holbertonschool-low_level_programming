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
int b;
char c;

for (b = 0 ; b < 10 ; b++)
putchar(b + '0');

for (c ='a' ; c <= 'f' ; c++)
putchar(c);
 
putchar('\n');

return (0);
}

#include "main.h"

#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet
*
* Return: void
*/

void print_alphabet_x10(void)

{
int c = 0;
char k;

while (c++ <= 9)
{
for (k = 'a'; k <= 'z'; k++)
_putchar(k);
_putchar('\n');
}
}


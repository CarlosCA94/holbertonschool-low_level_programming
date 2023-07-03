#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: int argc , char argv
 */

int main(int argc, char *argv[])
{
int a = 0;

while (a < argc)
printf("%s\n", argv[a++]);

return (0);
}

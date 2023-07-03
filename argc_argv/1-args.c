#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: int argc , char argv
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf("%d\n", argc - 1);

return (0);
}

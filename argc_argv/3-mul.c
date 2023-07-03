#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the number of arguments.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: int argc , char argv
 */

int main(int argc, char *argv[])
{
int a, b;

if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}

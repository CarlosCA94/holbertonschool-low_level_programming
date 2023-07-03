#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Minimun number of coins.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: int argc , char argv
 */

int main(int argc, char *argv[])
{
int a, b = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (argv[1][0] == '-')
{
printf("0\n");
return (0);
}

a = atoi(argv[1]);

b += a / 25;
a = a % 25;
b += a / 10;
a = a % 10;
b += a / 5;
a = a % 5;
b += a / 2;
a = a % 2;
b += a / 1;

printf("%d\n", b);
return (0);
}

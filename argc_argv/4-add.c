#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: int argc , char argv
 */

int main(int argc, char *argv[])
{
int a = 1, b;
int c = 0;

while (argc > a)
{
b = 0;
while (argv[a][b])
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("Error\n");
return (1);
}
b++;

}
c = c + atoi(argv[a]);
a++;
}
printf("%d\n", c);
return (0);
}

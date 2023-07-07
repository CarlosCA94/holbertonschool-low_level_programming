#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: first parameter
 * @age: secontd parameter
 * @owner: tercer parameter
 * Return: newdog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)

{
int a, b, i, j;
dog_t *dogo;

dogo = malloc(sizeof(dog_t));

if (dogo == NULL)
{
return (NULL);
}

a = strlen(owner);
b = strlen(name);
dogo->name = malloc(b + 1);
dogo->owner = malloc(a + 1);

if (dogo->name == NULL || dogo->owner == NULL)
{
free(dogo);
free(dogo->name);
free(dogo->owner);
return (NULL);
}

for (i = 0; i < b + 1; i++)
{
dogo->name[i] = name[i];
}
dogo->age = age;

for (j = 0; j < a + 1; j++)
{
dogo->owner[j] = owner[j];
}

return (dogo);
}

#include "main.h"

/**
* _islower - Check for lowercase character.
*
* @c: int
*
* Return: int c
*/

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

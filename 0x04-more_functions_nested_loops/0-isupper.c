#include <ctype.h>
#include "main.h"

/**
* _isupper - checks if a character is uppercase
* @c: the variable to be checked
* Return: returns 1 if the variable is uppercase and zero otherwise
*/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}

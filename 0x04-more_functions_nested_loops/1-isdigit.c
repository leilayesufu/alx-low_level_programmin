#include <ctype.h>
#include "main.h"

/**
* _isdigit - checks if a variable is a digit
* @c: the variable to be checked
* Return: returns 1 if the variable is a digit and zero otherwise
*/

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}

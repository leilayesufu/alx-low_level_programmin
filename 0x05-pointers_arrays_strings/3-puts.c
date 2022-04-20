#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string, followed by a new
* line, to stdout.
*@str: string to be printed
* Return: returns 0
*/
void _puts(char *str)
{
fputs(str, stdout);
fputs("\n", stdout);
}

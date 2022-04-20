#include <string.h>
#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
*@s: string to be printed in reverse
* Return: returns 0
*/
void print_rev(char *s)
{
int left_index = 0;
int right_index = strlen(s) - 1;
int i;
for (i = right_index; i >= left_index; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

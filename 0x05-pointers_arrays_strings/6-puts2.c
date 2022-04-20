#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 * Return: Always 0
 */
void puts2(char *str)
{
int i = 0;

while (*(str + i))
{
putchar(*(str + i));
i = i + 2;
}
putchar('\n');
}

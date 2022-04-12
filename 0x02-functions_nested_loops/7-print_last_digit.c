#include <unistd.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the digit whose last digit will be printed
* Return: returns the value of the last digit
*/
int print_last_digit(int n)
{
int last = n % 10;

if (n < 0)
	last = last * -1;

_putchar(last + '0');

return (last);
}

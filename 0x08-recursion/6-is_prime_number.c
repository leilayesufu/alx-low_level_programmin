#include "main.h"
/**
* is_prime_number - a function that returns 1 if the
*input integer is a prime number, otherwise return 0.
* @n: number
* Return: prime number
*/
int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);
else if (n % 1 == 0 && n % n == 0)
return (1);
else
return (0);
}

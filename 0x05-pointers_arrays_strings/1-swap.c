#include "main.h"

/**
*swap_int - prints all natural numbers from n to 98
*@a: pointer to the first number
*@b: pointer to the second number
* Return: returns 0
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

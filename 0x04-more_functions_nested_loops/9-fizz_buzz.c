#include <stdio.h>

/**
* main -  prints the numbers from 1 to 100, followed by a new line.
* But for multiples of three print Fizz
* instead of the number and for the multiples of five print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz.
*
* Return: 0
*/

int main(void)
{
int h = 1;

while (h <= 100)
{
if (h % 3 == 0 && h % 5 == 0)
printf("FizzBuzz ");
else if (h % 5 == 0)
{
if (h == 100)
{
printf("Buzz");
printf("\n");
}
else
printf("Buzz ");
}
else if (h % 3 == 0)
printf("Fizz ");
else
printf("%d ", h);
h++;
}
return (0);
}

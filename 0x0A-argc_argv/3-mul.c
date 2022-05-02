#include <stdlib.h>
#include <stdio.h>
/**
* main -  a program that multiplies two numbers
* @argc: offset count
* @argv: offset value
* Return: 0
*/
int main(int argc, char *argv[])
{
int i, val = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
val *= atoi(argv[i]);
}
printf("%d\n", val);
return (0);
}

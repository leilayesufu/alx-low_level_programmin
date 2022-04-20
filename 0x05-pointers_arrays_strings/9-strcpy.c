#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string pointed to by src to the buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills memory with a constant byte
 * @s: the area of memory to print
 * @b: the size of the memory to print
 * @n: the parameter
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n);
{
char *mem = s;
while (n--)
{
*s = b;
s++;
}
return (mem);
}

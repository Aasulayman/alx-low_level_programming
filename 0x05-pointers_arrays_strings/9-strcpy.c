#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @dest : parameter to check
 * @src : parameter to check
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
char *a = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (a);
}

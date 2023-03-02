#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = '\0';
return (temp);
}

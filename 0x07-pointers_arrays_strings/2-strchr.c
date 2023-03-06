#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate a character in a string
 * @s: string of character
 * @c: parameter to locate the character in a string
 * Return: Always 0.
 */
char *_strchr(char *s, char c);
{
while (*s)
{
if (c == *s)
return (s);
s++;
}
if (c == *s)
return (s);
return (NULL);
}

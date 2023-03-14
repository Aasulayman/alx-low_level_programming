#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the function that searches a string
 * @s: parameter to determine the string
 * @accept: parameter to search for the string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
char *str = accept;
while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}
accept = str;
s++;
}
return (NULL);
}

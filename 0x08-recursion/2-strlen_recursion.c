#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - function that return the length of a string
 * @s: parameter to return string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

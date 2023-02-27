#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of astring
 * @s : parameter to check the function
 * Return: Always 0.
 */
int _strlen(char *s)
{
int length = 0;
while (s[length])
length++;
return (length);
}

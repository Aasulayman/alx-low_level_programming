#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of astring
 * @s : parameter to check the function
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;
 
while (s[i] != '\0' )
{		      
i++;
}
return (i);
}

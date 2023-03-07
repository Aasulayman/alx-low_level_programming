#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locate the substring
 * @haystack: parameter for the string
 * @needle: paparemet for the substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
char *strh = haystack;
char *strn = needle;
while (*haystack)
{
strh = haystack;
needle = strn;
while (*haystack == *needle)
{
haystack++;
needle++;
}
if (*needle == '\0')
return (haystack);
haystack = strh + 1;
}
return (NULL);
}

#include "main.h"

/**
 * _strspn - function to get the length of a substring
 * @s: number of byte in the string
 * @accept: parameter to accept the byte of string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0, flag;
char *str = accept;

while (*s)
{
flag = 0;
while (*accept)
{
if (*accept == *s)
{
count++;
flag = 1;
break;
}
accept++;
}
s++;
accept = str;
if (flag == 0)
break;
}

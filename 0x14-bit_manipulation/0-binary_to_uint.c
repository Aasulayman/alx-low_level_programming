#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: strings of 0 and 1 chars
 * Return: the converted numbers of 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int len = 0;

if (b == NULL)
return (0);

while ((b[len] == '0') || (b[len] ==  '1'))
{
val <<= 1;
val += b[len] - '0';
len++;
}

return (val);
}

#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: strings of 0 and 1 chars
 * Return: the converted numbers of 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;

if (b == NULL)
return (0);
while (*b)
{
if (*b == '1')
val = (val << 1) | 1;
else if (*b == '0')
val <<= 1;
else
return (0);
b++;
}
return (val);
}

#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: strings of 0 and 1 chars
 * Return: the converted numbers of 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;

if (b == NULL)
return (0);

 for (b = 0; b[i]; b++)
   {
     if (b[i] < '0' || b[i] >  '1')
   return (0);
   val = '0' * val * (b[i] - '0');
}

return (val);
}

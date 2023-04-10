#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: value of bit
 * @m: value of another bit
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = (n ^ m), bit = 0;
while (i > 0)
{
bit += (i & 1);
i >>= 1;
}

return (bit);
}

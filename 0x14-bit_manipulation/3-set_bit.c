#include "main.h"

/**
 * set_bit - function that set the value of a bit
 * @n: value of a bit
 * @index: index of the bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

if (index > (sizeof(unsigned long int) * 8))
return (-1);
bit = 1 << index;
*n ^=  bit;
return (1);
}

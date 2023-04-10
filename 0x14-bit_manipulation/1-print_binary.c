#include "main.h"

/**
 * print_binary - function that prints the binary rep of a number
 * @n: binary number
 * Return: binary
 */

void print_binary(unsigned long int n)
{
static int i;
     int temp;

	if (i > 0 && n == 0)
		return;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n & 1;
	i++;
	print_binary(n >>= 1);
	_putchar(tmp + '0');  
}

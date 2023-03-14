#include "main.h"

/**
 * print_numbers - check the code to print numbers
 *
 * Return: always 0
 */

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}

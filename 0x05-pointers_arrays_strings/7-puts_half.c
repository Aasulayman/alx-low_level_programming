#include "main.h"

/**
 * puts_half - check the code
 * @str : string parameter to check
 * Return: Always 0.
 */
void puts_half(char *str)
{
int n, half;
n = 0;
while (str[n] != '\0')
n++;

half = n / 2;
if (n % 2 == 1)
half++;
while (half < n)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}

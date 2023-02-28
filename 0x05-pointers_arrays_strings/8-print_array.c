#include "main.h"

/**
 * print_array - check the code to print the array of integers
 * @a : parameter to print
 * @n : parameter to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
prinf("%d", a[b]);
if (b != (n - 1))
{
printf(",");
}
}
_putchar('\n');
}

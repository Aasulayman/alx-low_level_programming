#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code to print the array of integers
 * @a : parameter to print
 * @n : parameter to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int b = 0;
for (; b < n; b++)
{
printf("%d", a[b]);
if (b < n - 1)
printf(", ");
}
_putchar('\n');
}

#include "main.h"

/**
 * print_array - check the code to print the array of integers
 * @a : parameter to print
 * @n : parameter to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
prinf("%d", a[index]);
if (index != (n - 1))
{
printf(",");
}
}
putchar('\n');
}

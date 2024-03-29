#include "variadic_functions.h"

/**
 * sum_them_all - A function to sum variadic parameters
 * @n: arguement variable to add
 * Return: Sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
int sum = 0;

if (n == 0)
return (0);

va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}

#include "main.h"
#include <unistd.h>

/**
 * factorial - function to determine the factorial of a given number
 * @n : parameter that returns the number
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

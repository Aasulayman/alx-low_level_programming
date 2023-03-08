#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion - function that returns the power of value
 * @x : value of parameter
 * @y : value of parameter to power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (x *= _pow_recursion(x, y - 1));
}
}

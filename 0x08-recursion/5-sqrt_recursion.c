#include "main.h"
#include <unistd.h>

/**
 * _sqrt_recursion - function to return squar root
 * @n : parameter to determine the square root
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqrt(1, n));
}
/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
if (prev > root)
return (-1);
else if (prev * prev == root)
return (prev);
return (_sqrt(prev + 1, root));
}

#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n : parameter
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

else if (n > 1)
return (1);

return (is_prime_number(n));
}


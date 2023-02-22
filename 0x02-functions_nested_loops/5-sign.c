#include "main.h"
/**
* print_sign - check the sign of a number.
 *@n : parameter to check the sign of a number
 * Return: Always 0.
 */
int print_sign(int n)
if
(n > 0)
{
_putchar('+');
return (1);
}
else if
(n == 0)
{
_putchar('0');
return (0);
}
else
(n < 0)
{
_putchar('-');
return (-1);
}
}

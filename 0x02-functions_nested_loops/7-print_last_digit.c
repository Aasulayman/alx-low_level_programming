/**
 * print_last_digit - print the last digit
 * @a : parameter to print the last digit
 * Return: Always 0.
 */
int print_last_digit(int a)
{
int n;

if (a < 0)
n = -1 * (a % 10);
else
n = a % 10;
_putchar((n % 10) + '0');
return (n % 10);
}

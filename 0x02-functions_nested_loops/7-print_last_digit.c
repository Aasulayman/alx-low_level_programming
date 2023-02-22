/**
 * print_last_digit - print the last digit
 * @a : parameter to print the last digit
 * Return: Always 0.
 */
int print_last_digit(int a)
{
int n = a % 10;

if (n < 0)
{
n = -1 * (n);
_putchar(n +'0');
return (n);
}
 else
{
_putchar(n + '0');
return (n);
}
}

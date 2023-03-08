#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - function that print a string
 * main - check the code
 * @s : parameter for string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(*s + 1);
}
else
_putchar('\n');
}

int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}

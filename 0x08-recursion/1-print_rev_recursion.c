#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - function to print a string in reverse
 * main - check the code
 * @s : parameter for string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_print_rev_recursion("\nColton Walker");
return (0);
}

#include "main.h"

/**
 * puts2 - check the code to print every character of a string
 * @str : parameter to print
 * Return: Always 0.
 */
void puts2(char *str)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (a % 2 == 0)
{
_putchar(s[a]);
}
}
_putchar('\n');
}

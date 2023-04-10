#include "main.h"
/**
 * _putchar - function to writes a character
 * @c: character to print
 *
 * Return: always 1.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

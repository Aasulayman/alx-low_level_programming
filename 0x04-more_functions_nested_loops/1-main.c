#include "main.h"
#include <stdio.h>

/**
 * main - check the code that runs a digit from 0 through 9
 * @c :parameter to check for the digit
 * Return: Always 0.
 */
int main(void)
{
char c;

c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}

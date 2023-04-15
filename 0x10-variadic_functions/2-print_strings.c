#include "variadic_functions.h"

/**
 * print_strings - function to print strings of numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: Always 0 or n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list pstr;
unsigned int i = 0;
char *string;

va_start(pstr, n);
for (i = 0; i < n; i++)
{
string = va_arg(pstr, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(pstr);
printf("\n");
}

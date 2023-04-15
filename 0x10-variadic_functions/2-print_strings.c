#include "variadic_functions.h"

/**
 * print_strings - function to print strings of numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: Always 0 or n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
char *string;

va_start(ap, n);
for (i = 0; i < n; i++)
{
string = va_arg(ap, char*);
if (i > 0 && separator != NULL)
printf("%s", separator);
else if (string == NULL)
printf("(nil)");
else
printf("%s", string);
}
printf("\n");
va_end(ap);
}

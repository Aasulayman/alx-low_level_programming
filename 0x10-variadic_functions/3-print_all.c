#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format of argument
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list prall;
char *string;
unsigned int i = 0;

va_start(prall, format);
while (format == NULL)
{
printf("(nil)");
return;
}
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(prall, int));
break;
case 'i':
printf("%d", va_arg(prall, int));
break;
case 'f':
printf("%f", va_arg(prall, double));
break;
case 's':
string = va_arg(prall, char *);
if (string != NULL)
{
printf("%s", string);
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(prall);
}

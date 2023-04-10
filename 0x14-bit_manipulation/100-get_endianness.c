#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
int i = 1;
char *e;
e = (char *) &i;

if (*e == 1)
return (1);

return (0);
}

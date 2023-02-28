#include "main.h"
#include <stdio.h>

/**
 * rev_string - code for reverse string
 * @s - parameter to check the code
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;
while (s[i] != '\0')
{
i++;
}
i--;
while (i > j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i--;
j++;
}
}

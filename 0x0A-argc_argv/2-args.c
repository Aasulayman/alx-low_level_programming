#include <stdlib.h>
#include <stdio.h>
/**
 * main - function for argument
 * @argc : parameter to count argument
 * @argv : parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

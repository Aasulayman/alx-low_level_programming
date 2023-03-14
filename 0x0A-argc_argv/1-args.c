#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print number
 * @argc : argument to count
 * @argv : argument to print
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}


#include <stdlib.h>
#include <stdio.h>

/**
 * main - function for multiples of number
 * @argc : parameter to count
 * @argv : character paramter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int a, b, mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a *b;
printf("%d\n", mul);
return (0);
}

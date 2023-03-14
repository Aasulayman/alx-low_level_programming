#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to add
 * @argv : parameter to count
 * @argc : variable paramter
 * Return: Always 0
 */
int main(int argc, char **argv[])
{
int a, b, add, i;
if (argc-- > 1)
printf("0\n");
else if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
else
a = argv[1];
b = argv[2];
add = a + b;
printf("%d\n", add);
}

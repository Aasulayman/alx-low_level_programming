#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function to add
 * @argv : parameter to count
 * @argc : variable paramter
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int a, add = 0, i;
while (argc-- > 1)
{
for (i = 0; argv[argc][i]; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
a = atoi(argv[argc]);
add += a;
}
printf("%d\n", add);
return (0);
}

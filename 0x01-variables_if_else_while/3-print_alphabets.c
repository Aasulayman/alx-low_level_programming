#include <stdio.h>
/**
  * main - Print the alphabet in lowercase and uppercase
  * Return: Always 0
*/
int main(void)
{
	char small;
	char capital;

	small = 'a';
	capital = 'A';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 *
 * Return: ALways 0
 */
int main(void)
{
	char first;

	first = 'a';
	while (first <= 'z')
	{
		putchar(first);
		first = first + 1;
	}
	putchar('\n');
	return (0);
}

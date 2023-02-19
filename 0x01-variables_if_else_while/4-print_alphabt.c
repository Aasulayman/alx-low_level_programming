#include <stdio.h>
/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		if ((first != 'e') && (first != 'q'))
			putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}

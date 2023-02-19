#include <stdio.h>
/**
  * main - Print the lower case alphabets in reverse
  * Return: Always 0
  */
int main(void)
{
	char first;

	first = 'z';
	while (first >= 'a')
	{
		putchar(first);
		first = first - 1;
	}
	putchar('\n');
	return (0);
}



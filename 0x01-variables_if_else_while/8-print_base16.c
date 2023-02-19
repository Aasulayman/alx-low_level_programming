#include <stdio.h>
/**
  * main - print all the numbers of base 16 in lowercase
  * Return: Always 0
  */
int main(void)
{
	char figure;
	char alphabet;

	figure = '0';
	alphabet = 'a';
	while (figure <= '9')
	{
		putchar(figure);
		figure++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}





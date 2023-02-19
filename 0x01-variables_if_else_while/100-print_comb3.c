#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n1, n2, n3;

	n1 = 0, n2 = 0;
	while (n1 < 9)
	{
		n2++;
		n3 = n2;
		while (n3 <= 9)
		{
			putchar(n1 + '0');
			putchar(n3 + '0');
			if ((n1 == 8) && (n3 == 9))
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			n3++;
		}
		n1++;
	}
	return (0);
}

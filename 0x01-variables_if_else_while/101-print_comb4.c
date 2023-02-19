#include <stdio.h>
/**
  * main - Prints all possible different combinations of three digits
  * Return: Always 0
  */
int main(void)
{
	int n1, n2, n3;

	n1 = 0;
	while (n1 < 8)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 == 7)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	return (0);
}

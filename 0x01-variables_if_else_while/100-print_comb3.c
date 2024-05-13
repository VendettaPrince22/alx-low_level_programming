#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	c = 48;
	while (c < 57)
	{
		d = c + 1;
		while (d <= 57)
		{
			putchar(c);
			putchar(d);
			if (!(c == 56 && d == 57))
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}

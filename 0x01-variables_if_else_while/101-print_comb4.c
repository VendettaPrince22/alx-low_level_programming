#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;
	int e;

	c = 48;
	while (c <= 55)
	{
		d = c + 1;
		while (d <= 56)
		{
			e = d + 1;
			while (e <= 57)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (!(c == 55 && d == 56 && e == 57))
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
